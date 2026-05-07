// Function: FUN_01f2fbe0
// Address: 01f2fbe0
// Size: 506 bytes
// Class: Unknown
// String references:
//   "objectAtIndex:"
//   "isVisible"
//   "delegate"
//   "gnWindow"

void FUN_01f2fbe0(void)

{
  void*puVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  void*this_ptr;
  uint64_t uVar6;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  lVar4 = FUN_01e587a0();
  puVar1 = PTR__objc_msgSend_024a9998;
  if (lVar4 != 0) {
    for (uVar6 = 0; uVar5 = (*puVar1)(), uVar6 < uVar5; uVar6 = uVar6 + 1) {
      (*puVar1)();
      cVar2 = (*puVar1)();
      if ((cVar2 != '\0') && (lVar4 = (*puVar1)(), lVar4 != 0)) {
        _objc_msgSend_stret();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01f2fd30;
          }
        }
        else if (local_40 != 0) {
LAB_01f2fd30:
          FUN_01e58640();
          cVar2 = FUN_00d24090();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_00d21140();
          }
          local_38 = '\0';
          FUN_00d50b20();
        }
      }
    }
  }
  (*PTR__objc_release_024a99a0)();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

