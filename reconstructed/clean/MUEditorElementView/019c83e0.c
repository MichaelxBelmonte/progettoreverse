// Function: FUN_019c83e0
// Address: 019c83e0
// Size: 549 bytes
// Class: MUEditorElementView

uint64_t FUN_019c83e0(void* param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(uint64_t *)(*(int64_t *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01265b00(g_02390124);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(uint64_t *)(uVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152e890(g_023b26e8);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}

