/* -*- c++ -*- */
/* 
 * Copyright 2015 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_DARC_LAYER2_FORMAT_H
#define INCLUDED_DARC_LAYER2_FORMAT_H

#include <darc/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace darc {

    /*!
     * \brief <+description of block+>
     * \ingroup darc
     *
     */
    class DARC_API layer2_format : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<layer2_format> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of darc::layer2_format.
       *
       * To avoid accidental use of raw pointers, darc::layer2_format's
       * constructor is in a private implementation
       * class. darc::layer2_format::make is the public interface for
       * creating new instances.
       */
      static sptr make(bool log, 
                        bool debug, 
                        bool crc, 
                        bool repair,
                        unsigned char errorwidth);
    };

  } // namespace darc
} // namespace gr

#endif /* INCLUDED_DARC_LAYER2_FORMAT_H */

