// Function: FUN_0131a710
// Address: 0131a710
// Size: 944 bytes
// Class: MULSSGenerator

uint32_t FUN_0131a710(uint64_t param_1)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  byte bVar6;
  byte unaff_SIL;
  int64_t *plVar7;
  int iVar8;
  uint64_t unaff_R15;
  undefined7 uVar9;
  int64_t local_88;
  char local_80;
  int64_t *local_48;
  char local_40;
  uint32_t local_38;
  
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_0131a7a1;
    }
  }
  else if (local_88 != 0) {
LAB_0131a7a1:
    if (*(int *)(local_88 + 0xc) < 1) {
      local_38 = 1;
    }
    else {
      local_38 = 1;
      iVar8 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126e7e0();
        uVar9 = (undefined7)(unaff_R15 >> 8);
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_0131a8a0;
          }
LAB_0131a930:
          unaff_R15 = CONCAT71(uVar9,1);
        }
        else {
          if (local_48 == (int64_t *)0x0) goto LAB_0131a930;
LAB_0131a8a0:
          pvVar4 = _pthread_getspecific((void*)param_1);
          plVar7 = local_48;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar7 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar7 + 0x370))();
          unaff_R15 = CONCAT71(uVar9,1);
          if (cVar2 == '\0') {
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126dd90();
            unaff_R15 = 0;
          }
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264180();
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_0131a9f0;
          }
LAB_0131aa70:
          bVar1 = true;
LAB_0131aa72:
          if (unaff_SIL == 0) {
            local_38 = 0;
          }
          else {
LAB_0131aa78:
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
          }
          uVar3 = local_38;
          if (!bVar1) goto LAB_0131aacf;
        }
        else {
          if (local_48 == (int64_t *)0x0) goto LAB_0131aa70;
LAB_0131a9f0:
          pvVar4 = _pthread_getspecific((void*)param_1);
          plVar7 = local_48;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar7 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar7 + 0x370))();
          bVar1 = false;
          if (cVar2 == '\0') goto LAB_0131aa72;
          bVar6 = (byte)(unaff_R15 & 0xffffffff) | unaff_SIL ^ 1;
          param_1 = CONCAT71((int7)((unaff_R15 & 0xffffffff) >> 8),bVar6);
          uVar3 = local_38;
          if ((char)unaff_R15 == '\0') {
            uVar3 = 0;
          }
          if (bVar6 == 0) goto LAB_0131aa78;
LAB_0131aacf:
          local_38 = uVar3;
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_88 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    return local_38;
  }
  return 1;
}

