// ===================================================================
// GNHTTPProcessor — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (3):
//                   _request
//                   _serverReachable
//                   _isProcessing


// ============================================================
// 00e97360
// ============================================================
// Function: FUN_00e97360
// Address: 00e97360
// Size: 531 bytes
// Class: GNHTTPProcessor
// String references:
//   "com.celemony.%@.%s"
// === GNHTTPProcessor properties ===
//                   _request
//                   _serverReachable
//                   _isProcessing


void FUN_00e97360(void)

{
  char *pcVar1;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_00dec0e0();
  (**(code **)(*local_80 + 0x368))();
  FUN_00d23310();
  pcVar1 = local_38;
  if (local_68[0] != '\0') {
    pcVar1 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar1 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8a060();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_38[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68[0] = '\x02';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_58 = 0;
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_60 = local_48;
  local_58 = '\x01';
  FUN_00d8cb40();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00e972c0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00e95410
// ============================================================
// Function: FUN_00e95410
// Address: 00e95410
// Size: 1781 bytes
// Class: GNHTTPProcessor
// String references:
//   "GNHTTPProcessor"
// === GNHTTPProcessor properties ===
//                   _request
//                   _serverReachable
//                   _isProcessing


void FUN_00e95410(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02570738;
  FUN_00e95b40();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278963b == '\0') {
    FUN_00e95e60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278963b == '\0') {
    FUN_00e95ff0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278963b == '\0') {
    FUN_00e96180();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278963b == '\0') {
    FUN_00e96310();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278963b == '\0') {
    FUN_00e964a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278963b == '\0') {
    FUN_00e96630();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278963b == '\0') {
    FUN_00e967c0();
    FUN_00e87980();
  }
  return;
}

