// Function: FUN_019cc590
// Address: 019cc590
// Size: 2139 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019cca09) */
/* WARNING: Removing unreachable block (ram,0x019cca0e) */
/* WARNING: Removing unreachable block (ram,0x019cca32) */
/* WARNING: Removing unreachable block (ram,0x019cca3b) */
/* WARNING: Removing unreachable block (ram,0x019ccdd3) */
/* WARNING: Removing unreachable block (ram,0x019ccddf) */
/* WARNING: Removing unreachable block (ram,0x019cc5dd) */
/* WARNING: Removing unreachable block (ram,0x019cc5e6) */
/* WARNING: Removing unreachable block (ram,0x019cca87) */
/* WARNING: Removing unreachable block (ram,0x019ccab0) */
/* WARNING: Removing unreachable block (ram,0x019cc6a7) */
/* WARNING: Removing unreachable block (ram,0x019cc6d0) */
/* WARNING: Removing unreachable block (ram,0x019cc6a9) */
/* WARNING: Removing unreachable block (ram,0x019cc6d2) */
/* WARNING: Removing unreachable block (ram,0x019cca89) */
/* WARNING: Removing unreachable block (ram,0x019ccab2) */

ulonglong FUN_019cc590(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  int iVar11;
  longlong lVar12;
  longlong *unaff_RDI;
  longlong lVar13;
  ulonglong unaff_R13;
  bool bVar14;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  int local_60;
  longlong local_50;
  char local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  lVar2 = local_78;
  uVar4 = (**(code **)(*unaff_RDI + 0xe20))();
  if ((local_70 == '\0') && (local_78 != 0)) {
    uVar4 = FUN_00d50b00();
  }
  bVar14 = *(int *)(local_78 + 0xc) == 0;
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar14);
  if (bVar14) {
    uVar5 = uVar5 & 0xffffffff;
  }
  else {
    uVar5 = uVar5 & 0xffffffff;
    if (param_2 != '\0') {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      local_78 = 0;
      local_60 = -1;
      local_38 = 0;
      lVar13 = 0;
LAB_019cc6a3:
      lVar7 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (local_60 < *(int *)(lVar2 + 0xc)) {
        lVar12 = *(longlong *)(lVar2 + 0x10);
        local_78 = *(longlong *)(lVar12 + 8 + lVar7 * 8);
        pvVar8 = _pthread_getspecific((pthread_key_t)lVar12);
        pVar10 = (pthread_key_t)lVar12;
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        lVar7 = local_50;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_0152ebe0();
          lVar7 = local_50;
          if (local_50 == lVar13) {
            lVar7 = lVar13;
            if (((char)local_38 != '\0') || (local_50 == 0)) {
              uVar5 = local_38 & 0xffffffff;
              goto joined_r0x019cc86b;
            }
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto joined_r0x019cc96b;
            }
LAB_019cc814:
            local_48 = '\0';
            local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
            lVar13 = lVar7;
          }
          else {
            if (local_48 != '\0') {
              if (((char)local_38 != '\0') && (lVar13 != 0)) {
                uVar4 = FUN_00d50b20();
              }
              goto LAB_019cc814;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            if (((char)local_38 != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
joined_r0x019cc96b:
            uVar5 = CONCAT71((int7)(unaff_R13 >> 8),1);
joined_r0x019cc86b:
            lVar13 = lVar7;
            if ((local_48 == '\0') || (local_50 == 0)) {
              local_38 = uVar5 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_38 = uVar5 & 0xffffffff;
            }
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar3 = FUN_01507f00();
          iVar1 = *(int *)(puVar6 + 3);
          unaff_R13 = (ulonglong)iVar1;
          iVar11 = iVar1 + 3;
          if (-1 < (longlong)unaff_R13) {
            iVar11 = iVar1;
          }
          if (3 < (longlong)unaff_R13) {
            iVar11 = iVar11 >> 2;
            lVar7 = 0;
            do {
              if (*(int *)(puVar6[2] + lVar7 * 4) == iVar3) goto LAB_019cc6a3;
              lVar7 = lVar7 + 1;
            } while (iVar11 != (int)lVar7);
          }
          FUN_00c8e340(iVar11,1);
          *(int *)(puVar6[2] + unaff_R13) = iVar3;
        }
        goto LAB_019cc6a3;
      }
      FUN_001159b0();
      bVar14 = *(int *)(puVar6 + 3) + 3U < 7;
      uVar5 = CONCAT71((int7)((ulonglong)&local_50 >> 8),bVar14);
      if (!bVar14) {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02572358;
        (*DAT_02572370)();
        (**(code **)(*unaff_RDI + 0x9b0))();
        if (local_78 != 0) {
          FUN_00d50b00();
          local_60 = -1;
          local_39 = bVar14;
LAB_019cca83:
          lVar7 = (longlong)local_60;
          local_60 = local_60 + 1;
          if (local_60 < *(int *)(local_78 + 0xc)) {
            lVar12 = *(longlong *)(local_78 + 0x10);
            lVar7 = *(longlong *)(lVar12 + 8 + lVar7 * 8);
            pvVar8 = _pthread_getspecific((pthread_key_t)lVar12);
            pVar10 = (pthread_key_t)lVar12;
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            lVar12 = local_50;
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (lVar12 != 0) {
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar4 = FUN_0152ebe0();
              lVar12 = local_50;
              if (local_50 == lVar13) {
                lVar12 = lVar13;
                if (((char)local_38 != '\0') || (local_50 == 0)) {
                  unaff_R13 = local_38 & 0xffffffff;
                  goto joined_r0x019ccc4b;
                }
                if (local_48 == '\0') {
                  FUN_00d50b00();
                  goto joined_r0x019ccd55;
                }
LAB_019ccbf4:
                local_48 = '\0';
                local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
                lVar13 = lVar12;
              }
              else {
                if (local_48 != '\0') {
                  if (((char)local_38 != '\0') && (lVar13 != 0)) {
                    uVar4 = FUN_00d50b20();
                  }
                  goto LAB_019ccbf4;
                }
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
                if (((char)local_38 != '\0') && (lVar13 != 0)) {
                  FUN_00d50b20();
                }
joined_r0x019ccd55:
                unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
joined_r0x019ccc4b:
                lVar13 = lVar12;
                if ((local_48 == '\0') || (local_50 == 0)) {
                  local_38 = unaff_R13 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_38 = unaff_R13 & 0xffffffff;
                }
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_01507f00();
              iVar1 = *(int *)(puVar6 + 3);
              iVar11 = iVar1 + 3;
              if (-1 < iVar1) {
                iVar11 = iVar1;
              }
              if (3 < iVar1) {
                lVar12 = 0;
                do {
                  if (*(int *)(puVar6[2] + lVar12 * 4) == iVar3) {
                    local_48 = '\0';
                    local_50 = lVar7;
                    FUN_00d21140();
                    if ((local_48 != '\0') && (local_50 != 0)) {
                      FUN_00d50b20();
                    }
                    break;
                  }
                  lVar12 = lVar12 + 1;
                } while (iVar11 >> 2 != (int)lVar12);
              }
            }
            goto LAB_019cca83;
          }
          FUN_001159b0();
          FUN_00d50b20();
          uVar5 = CONCAT71((int7)((ulonglong)&local_50 >> 8),local_39);
        }
        (**(code **)(*unaff_RDI + 0xdc8))();
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if (((char)local_38 != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) goto LAB_019cce2c;
    }
  }
  FUN_00d50b20();
LAB_019cce2c:
  return (uVar5 ^ 1) & 0xffffffff;
}


