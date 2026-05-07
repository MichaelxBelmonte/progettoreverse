// ===================================================================
// GNHTTPRequest — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (10):
//   GNHTTPRequestContentType _contentType
//                   _httpStatusCode
//                   _condition
//                   _failedProgress
//                   _expectedResultLength
//                   _receivedResultLength
//                   _resultData
//                   _resultMimeType
//                   _resultValuesCache
//                   _resultValuesExpected


// ============================================================
// 00e74220
// ============================================================
// Function: FUN_00e74220
// Address: 00e74220
// Size: 4219 bytes
// Class: GNHTTPRequest
// String references:
//   "GNHTTPRequest"
// === GNHTTPRequest properties ===
//   GNHTTPRequestContentType _contentType
//                   _httpStatusCode
//                   _condition
//                   _failedProgress
//                   _expectedResultLength
//                   _receivedResultLength
//                   _resultData
//                   _resultMimeType
//                   _resultValuesCache
//                   _resultValuesExpected


void FUN_00e74220(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02591508;
  FUN_00e75460();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e75720();
    FUN_00e87980();
  }
  FUN_00e758b0();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e75be0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e75d70();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e75f00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e76090();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x35) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e76220();
    FUN_00e87980();
  }
  FUN_00e763b0();
  FUN_00e76670();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e76930();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e76ac0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e76c50();
    FUN_00e87980();
  }
  FUN_00e76de0();
  FUN_00e770a0();
  FUN_00e77360();
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e77620();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e777b0();
    FUN_00e87980();
  }
  FUN_00e77a00();
  FUN_00e77d80();
  FUN_00e78100();
  FUN_00e783c0();
  FUN_00e78680();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e78940();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e78ad0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e78c60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e78df0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_02787f83 == '\0') {
    FUN_00e78f80();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00e777b0
// ============================================================
// Function: FUN_00e777b0
// Address: 00e777b0
// Size: 547 bytes
// Class: GNHTTPRequest
// String references:
//   "GNHTTPRequest"
//   "GNHTTPRequestContentType"
//   "_contentType"
// === GNHTTPRequest properties ===
//   GNHTTPRequestContentType _contentType
//                   _httpStatusCode
//                   _condition
//                   _failedProgress
//                   _expectedResultLength
//                   _receivedResultLength
//                   _resultData
//                   _resultMimeType
//                   _resultValuesCache
//                   _resultValuesExpected


void* FUN_00e777b0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02788460 = "_contentType";
      g_02788468 = &g_02787ec8;
      g_02788470 = 0;
      g_02788478 = 0x6500;
      g_02788480 = "GNHTTPRequestContentType";
      g_02788488 = &g_02788500;
      g_02788490 = 0;
      ram_0000000002788498 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02788460;
}

