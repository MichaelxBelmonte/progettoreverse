// ===================================================================
// MULoop — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (4):
//   MULoopUserRoleMask _roleMask
//                   _isPlaceholder
//                   _loopId
//                   _tagSet


// ============================================================
// 01164770
// ============================================================
// Function: FUN_01164770
// Address: 01164770
// Size: 701 bytes
// Class: MULoop
// String references:
//   "MULoop"
//   "MULoopProject"
//   "_operator"
//   "MULoopProducerCommit"
//   "MULoopLibrary"
//   "_users"
//   "_operators"
//   "_roleMask"
//   "MULoopUserRoleMask"
// === MULoop properties ===
//   MULoopUserRoleMask _roleMask
//                   _isPlaceholder
//                   _loopId
//                   _tagSet


void FUN_01164770(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01150e50();
  *this_ptr = &g_02616c68;
  FUN_01164bb0();
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01164c90();
  FUN_01164d70();
  FUN_01164e50();
  FUN_01164f30();
  FUN_01165010();
  this_ptr[0xf] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011650f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_operators";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProject");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011651e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_operator";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011652d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_operator";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducerCommit");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011653c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_users";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  return;
}

