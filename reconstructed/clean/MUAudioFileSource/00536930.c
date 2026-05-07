// Function: FUN_00536930
// Address: 00536930
// Size: 1227 bytes
// Class: MUAudioFileSource

uint64_t FUN_00536930(void* param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t **pplVar8;
  int64_t lVar9;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar10;
  void* pVar12;
  float fVar13;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  undefined7 uVar11;
  
  if (*(int64_t *)(this_ptr + 0x308) != 0) {
    uVar10 = 0;
    goto LAB_00536e0f;
  }
  uVar11 = (undefined7)((uint64_t)unaff_R12 >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (*(char *)(this_ptr + 0x24b) != '\0') goto LAB_00536e0f;
  FUN_00757c60();
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_00536e0f;
    FUN_00d50b00();
  }
  else if (local_98 == 0) goto LAB_00536e0f;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  local_38 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      goto LAB_00536a66;
    }
LAB_00536e00:
    uVar10 = CONCAT71(uVar11,1);
  }
  else {
    if (local_98 == 0) goto LAB_00536e00;
LAB_00536a66:
    if (0 < *(int *)(local_38 + 0xc)) {
      pVar12 = 0;
      do {
        lVar3 = local_70;
        pvVar5 = _pthread_getspecific(pVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124e100();
        lVar9 = local_38;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
            goto LAB_00536b50;
          }
        }
        else if (local_70 != 0) {
LAB_00536b50:
          local_68 = '\0';
          local_70 = 0;
          local_58 = -1;
          do {
            do {
              lVar6 = (int64_t)local_58;
              local_58 = local_58 + 1;
              uVar1 = *(uint *)(lVar3 + 0xc);
              uVar10 = (uint64_t)uVar1;
              if ((int)uVar1 <= local_58) goto LAB_00536db0;
              local_70 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar6 * 8);
              cVar4 = FUN_00e34240();
            } while ((cVar4 != '\0') || (fVar13 = (float)FUN_00e340b0(), g_02390124 <= fVar13));
            FUN_00e33de0();
            lVar6 = g_0270b920;
            if (g_0270b920 != 0) {
              FUN_00d50b00();
            }
            FUN_000175c0();
            plVar2 = local_48;
            FUN_0006e1c0();
            pplVar8 = (int64_t **)&g_02802688;
            if (plVar2 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar8 = &local_48;
              if (cVar4 == '\0') {
                pplVar8 = (int64_t **)&g_02802688;
              }
            }
            lVar9 = local_38;
            plVar2 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar8 + 1) = 0;
              lVar9 = local_38;
            }
            pVar7 = (void*)pplVar8;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 == (int64_t *)0x0) break;
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            FUN_0051b4f0();
            plVar2 = local_48;
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            lVar9 = local_38;
          } while (plVar2 != local_a8);
LAB_00536db0:
          FUN_00540b60();
          FUN_00d50b20();
          if (local_58 < (int)uVar1) {
            FUN_00115e00();
            uVar10 = 0;
            goto LAB_00536df5;
          }
        }
        pVar12 = pVar12 + 1;
      } while ((int)pVar12 < *(int *)(lVar9 + 0xc));
    }
    FUN_00115e00();
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
LAB_00536df5:
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00536e0f:
  return uVar10 & 0xffffffff;
}

