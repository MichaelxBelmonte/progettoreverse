// Function: FUN_004a0530
// Address: 004a0530
// Size: 625 bytes
// Class: MUAudioFileSource

uint64_t FUN_004a0530(void* param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t local_98;
  char local_90;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4ba0();
  lVar1 = g_02708bf0;
  if (g_02708bf0 != 0) {
    FUN_00d50b00();
  }
  uVar3 = FUN_00c9ff50();
  uVar5 = (uint64_t)uVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (param_2 == '\x01' && (char)uVar3 == '\0') {
    FUN_004f7da0();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar6 = 0;
      do {
        cVar2 = FUN_004a0530();
        uVar5 = uVar5 & 0xff;
        if (cVar2 == '\0') {
          uVar5 = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffffffffff01;
}

