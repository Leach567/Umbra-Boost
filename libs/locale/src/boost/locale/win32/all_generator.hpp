//
// Copyright (c) 2009-2011 Artyom Beilis (Tonkikh)
//
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#ifndef BOOST_LOCALE_IMPL_WIN32_ALL_GENERATOR_HPP
#define BOOST_LOCALE_IMPL_WIN32_ALL_GENERATOR_HPP

#include <boost/locale/generator.hpp>
#include <locale>

namespace boost {
    namespace locale {
        namespace impl_win {

            class winlocale;

            std::locale create_convert( std::locale const &in,
                                        winlocale const &lc,
                                        character_facet_type type);

            std::locale create_collate( std::locale const &in,
                                        winlocale const &lc,
                                        character_facet_type type);

            std::locale create_formatting(  std::locale const &in,
                                            winlocale const &lc,
                                            character_facet_type type);

            std::locale create_parsing( std::locale const &in,
                                        winlocale const &lc,
                                        character_facet_type type);

            std::locale create_codecvt( std::locale const &in,
                                        character_facet_type type);

        }
    }
}

#endif
