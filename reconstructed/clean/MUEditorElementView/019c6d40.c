// Function: FUN_019c6d40
// Address: 019c6d40
// Size: 944 bytes
// Class: MUEditorElementView

uint64_t FUN_019c6d40(void* param_1,char param_2)

{
  uint64_t uVar1;
  bool bVar2;
  char cVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t local_40;
  char local_38;
  
  uVar6 = 0;
  cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0xe30))();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    uVar4 = (uint64_t)*(uint *)(local_40 + 0xc);
    if (((uVar4 != 0) && (param_2 != '\0')) && (0 < (int)*(uint *)(local_40 + 0xc))) {
      uVar7 = 0;
      uVar6 = 0;
      bVar2 = false;
      do {
        uVar1 = *(uint64_t *)(*(int64_t *)(local_40 + 0x10) + uVar7 * 8);
        if (uVar6 == uVar1) {
          if ((!bVar2) && (uVar6 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (uVar1 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (uVar6 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            uVar6 = uVar1;
          }
          else {
            bVar2 = true;
            uVar6 = uVar1;
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2f0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e9d0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125ea90();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012df8d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012df8d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      if ((bVar2) && (uVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar4 != 0);
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}

