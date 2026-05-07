// Function: FUN_0044f9a0
// Address: 0044f9a0
// Size: 772 bytes
// Class: MDMetaWindowController

uint64_t FUN_0044f9a0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  int iVar7;
  int64_t local_58;
  char local_50;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar3 = FUN_01caea20();
  if (*(char *)(this_ptr + 0x249) == '\0') {
    iVar3 = iVar3 + -*(char *)(this_ptr + 0x248);
  }
  uVar4 = FUN_0044fe10();
  uVar6 = (uint64_t)uVar4;
  if ((uVar4 == 2) && (0 < iVar3)) {
    iVar7 = iVar3 - *(int *)(this_ptr + 0x24c);
    if (*(int *)(this_ptr + 0x24c) <= iVar3) {
      uVar6 = 1;
      cVar1 = *(char *)(this_ptr + 0x249);
      goto joined_r0x0044fa15;
    }
    iVar3 = iVar3 * 2;
    uVar6 = 2;
  }
  cVar1 = *(char *)(this_ptr + 0x249);
  iVar7 = iVar3;
joined_r0x0044fa15:
  if (cVar1 == '\0') {
    FUN_0044f700(uVar6,iVar7);
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x240);
    if (lVar2 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar2 + 0xc)) {
        iVar3 = 0;
        do {
          if (*(char *)(this_ptr + 0x248) == '\0') {
            pvVar5 = _pthread_getspecific((void*)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8aa0();
          }
          else {
            pvVar5 = _pthread_getspecific((void*)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e89e0();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar2 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 600);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_0044c950();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      lVar2 = *(int64_t *)(this_ptr + 600);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_0044cc50(uVar6,iVar7,param_3,param_4,local_58,0);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(char *)(this_ptr + 0x248) == '\0') {
      FUN_0044d3b0();
    }
    else {
      FUN_0044d780();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}

