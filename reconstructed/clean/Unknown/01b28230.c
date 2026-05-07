// Function: FUN_01b28230
// Address: 01b28230
// Size: 1245 bytes
// Class: Unknown

uint64_t FUN_01b28230(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t unaff_RBX;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint32_t uVar13;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  uVar9 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  if (param_2 == 0) goto LAB_01b2871e;
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b2827b;
    }
  }
  else if (local_40 != 0) {
LAB_01b2827b:
    FUN_01a1d6e0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      uVar9 = 0;
    }
    else {
      FUN_01a1d6e0();
      (**(code **)(*local_68 + 0xe30))();
      if (local_40 == 0) {
        bVar3 = true;
        lVar11 = 0;
      }
      else {
        lVar11 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar3 = false;
        }
        else {
          local_38 = '\0';
          bVar3 = false;
        }
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar10 = local_40;
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
        FUN_01a1d6e0();
        (**(code **)(*local_e0 + 0xe70))();
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00243390();
        if (local_40 == 0) {
          bVar2 = false;
          lVar10 = 0;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
        }
        else {
          local_38 = '\0';
          bVar2 = true;
        }
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00243390();
        if (local_40 == 0) {
          bVar2 = false;
          lVar10 = 0;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
        }
        else {
          local_38 = '\0';
          bVar2 = true;
        }
      }
      if (lVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar8 = *(uint *)(lVar10 + 0xc);
        if ((uint64_t)uVar8 == 0) {
          uVar9 = 0;
        }
        else {
          if (0 < (int)uVar8) {
            lVar12 = (uint64_t)uVar8 + 1;
            do {
              uVar8 = uVar8 - 1;
              lVar7 = *(int64_t *)(lVar10 + 0x10);
              lVar1 = *(int64_t *)(lVar7 + (uint64_t)uVar8 * 8);
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              pVar6 = (void*)lVar7;
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar4 = FUN_01263cf0();
              if (cVar4 == '\0') {
                pvVar5 = _pthread_getspecific(pVar6);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar4 = FUN_01263ef0();
                if (cVar4 != '\0') goto LAB_01b2859c;
              }
              else {
LAB_01b2859c:
                FUN_00d23620();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              lVar12 = lVar12 + -1;
            } while (1 < lVar12);
          }
          uVar13 = FUN_01a1d6e0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01a296f0(uVar13,0);
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          uVar8 = FUN_0176a9c0(g_02390124,g_02391094,g_02390124,g_02390124);
          uVar9 = (uint64_t)uVar8;
        }
        if (bVar2) {
          FUN_00d50b20();
        }
      }
      if (!bVar3 && lVar11 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_01b2871e;
  }
  uVar9 = 0;
LAB_01b2871e:
  return uVar9 & 0xffffffff;
}

