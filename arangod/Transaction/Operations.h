////////////////////////////////////////////////////////////////////////////////
/// @brief transaction operations
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2004-2013 triAGENS GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is triAGENS GmbH, Cologne, Germany
///
/// @author Jan Steemann
/// @author Copyright 2011-2013, triAGENS GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

#ifndef TRIAGENS_TRANSACTION_OPERATIONS_H
#define TRIAGENS_TRANSACTION_OPERATIONS_H 1

#include "Basics/Common.h"
#include "VocBase/vocbase.h"

namespace triagens {
  namespace transaction {

// -----------------------------------------------------------------------------
// --SECTION--                                                  class Operations
// -----------------------------------------------------------------------------

    class Operations {

////////////////////////////////////////////////////////////////////////////////
/// @brief Operations
////////////////////////////////////////////////////////////////////////////////

      private:
        Operations (Operations const&);
        Operations& operator= (Operations const&);

// -----------------------------------------------------------------------------
// --SECTION--                                      constructors and destructors
// -----------------------------------------------------------------------------

      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief create an operations collection
////////////////////////////////////////////////////////////////////////////////

        explicit Operations (TRI_voc_cid_t);

////////////////////////////////////////////////////////////////////////////////
/// @brief destroy an operations collection
////////////////////////////////////////////////////////////////////////////////

        ~Operations ();

// -----------------------------------------------------------------------------
// --SECTION--                                                    public methods
// -----------------------------------------------------------------------------

      public:

// -----------------------------------------------------------------------------
// --SECTION--                                                   private methods
// -----------------------------------------------------------------------------

      private:

// -----------------------------------------------------------------------------
// --SECTION--                                                 private variables
// -----------------------------------------------------------------------------

      private:

////////////////////////////////////////////////////////////////////////////////
/// @brief collection id
////////////////////////////////////////////////////////////////////////////////

        TRI_voc_cid_t const _id;

////////////////////////////////////////////////////////////////////////////////
/// @brief number of inserts into this collection
////////////////////////////////////////////////////////////////////////////////

        uint64_t _numInserts;

////////////////////////////////////////////////////////////////////////////////
/// @brief number of updates in this collection
////////////////////////////////////////////////////////////////////////////////

        uint64_t _numUpdates;

////////////////////////////////////////////////////////////////////////////////
/// @brief number of deletes in this collection
////////////////////////////////////////////////////////////////////////////////

        uint64_t _numDeletes;

    };

  }
}

#endif

// Local Variables:
// mode: outline-minor
// outline-regexp: "/// @brief\\|/// {@inheritDoc}\\|/// @addtogroup\\|/// @page\\|// --SECTION--\\|/// @\\}"
// End:
