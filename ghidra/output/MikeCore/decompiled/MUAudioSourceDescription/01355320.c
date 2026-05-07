// Function: FUN_01355320
// Address: 01355320
// Size: 3734 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x01355a6f) */
/* WARNING: Removing unreachable block (ram,0x01355a7b) */
/* WARNING: Removing unreachable block (ram,0x0135597d) */
/* WARNING: Removing unreachable block (ram,0x0135598d) */
/* WARNING: Removing unreachable block (ram,0x01355553) */
/* WARNING: Removing unreachable block (ram,0x01355563) */
/* WARNING: Removing unreachable block (ram,0x0135545a) */
/* WARNING: Removing unreachable block (ram,0x0135545f) */
/* WARNING: Removing unreachable block (ram,0x0135541d) */
/* WARNING: Removing unreachable block (ram,0x01355426) */
/* WARNING: Removing unreachable block (ram,0x01355657) */
/* WARNING: Removing unreachable block (ram,0x01355667) */
/* WARNING: Removing unreachable block (ram,0x013556ff) */
/* WARNING: Removing unreachable block (ram,0x01355704) */
/* WARNING: Removing unreachable block (ram,0x01355e02) */
/* WARNING: Removing unreachable block (ram,0x01355e0b) */
/* WARNING: Removing unreachable block (ram,0x01356229) */
/* WARNING: Removing unreachable block (ram,0x01356235) */
/* WARNING: Removing unreachable block (ram,0x0135626b) */
/* WARNING: Removing unreachable block (ram,0x0135627b) */
/* WARNING: Removing unreachable block (ram,0x0135583e) */
/* WARNING: Removing unreachable block (ram,0x0135584a) */
/* WARNING: Removing unreachable block (ram,0x01355cf6) */
/* WARNING: Removing unreachable block (ram,0x01355cff) */
/* WARNING: Removing unreachable block (ram,0x013560f0) */
/* WARNING: Removing unreachable block (ram,0x013560f9) */
/* WARNING: Removing unreachable block (ram,0x01356037) */
/* WARNING: Removing unreachable block (ram,0x01356060) */
/* WARNING: Removing unreachable block (ram,0x01355b1f) */
/* WARNING: Removing unreachable block (ram,0x01355b40) */
/* WARNING: Removing unreachable block (ram,0x0135576c) */
/* WARNING: Removing unreachable block (ram,0x01355790) */
/* WARNING: Removing unreachable block (ram,0x0135576e) */
/* WARNING: Removing unreachable block (ram,0x01355792) */
/* WARNING: Removing unreachable block (ram,0x01355577) */
/* WARNING: Removing unreachable block (ram,0x013555a0) */
/* WARNING: Removing unreachable block (ram,0x01355579) */
/* WARNING: Removing unreachable block (ram,0x013555a2) */
/* WARNING: Removing unreachable block (ram,0x013554b7) */
/* WARNING: Removing unreachable block (ram,0x013554e0) */
/* WARNING: Removing unreachable block (ram,0x013554b9) */
/* WARNING: Removing unreachable block (ram,0x013554e2) */
/* WARNING: Removing unreachable block (ram,0x013558bf) */
/* WARNING: Removing unreachable block (ram,0x013558cb) */
/* WARNING: Removing unreachable block (ram,0x01355b21) */
/* WARNING: Removing unreachable block (ram,0x01355b42) */
/* WARNING: Removing unreachable block (ram,0x01356039) */
/* WARNING: Removing unreachable block (ram,0x01356062) */
/* WARNING: Removing unreachable block (ram,0x01355c07) */
/* WARNING: Removing unreachable block (ram,0x01355c30) */
/* WARNING: Removing unreachable block (ram,0x01355c09) */
/* WARNING: Removing unreachable block (ram,0x01355c32) */
/* WARNING: Removing unreachable block (ram,0x01355c7b) */
/* WARNING: Removing unreachable block (ram,0x01355c84) */

void FUN_01355320(byte param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *unaff_RDI;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  longlong local_90;
  char local_88;
  int local_78;
  longlong local_68;
  int local_50;
  longlong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = *param_2;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar12 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar12 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar3 = FUN_00d23d70();
      FUN_01366a10();
      if (lVar6 == 0) {
        bVar2 = true;
        local_68 = 0;
      }
      else {
        FUN_00d50b00();
        local_68 = 0;
        local_50 = -1;
        if (bVar3 == 0) {
          while( true ) {
            lVar7 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_0133aef0();
            if (cVar4 != '\0') {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        else {
          while( true ) {
            lVar7 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_01366cc0(param_3,0);
            if ((cVar4 == '\0') && (cVar4 = FUN_0133aef0(), cVar4 != '\0')) {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        FUN_001150f0();
        bVar2 = false;
      }
      if (((bVar3 & param_1) == 1) && (FUN_01367040(), local_68 != 0)) {
        FUN_00d50b00();
        local_50 = -1;
        while( true ) {
          lVar7 = (longlong)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(local_68 + 0xc) <= local_50) break;
          lVar11 = *(longlong *)(local_68 + 0x10);
          lVar7 = *(longlong *)(lVar11 + 8 + lVar7 * 8);
          pvVar8 = _pthread_getspecific((pthread_key_t)lVar11);
          pVar9 = (pthread_key_t)lVar11;
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar14 = FUN_013dfdd0();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
              goto LAB_01355850;
            }
LAB_01355920:
            local_38 = '\0';
            FUN_01346520(uVar14,1);
            local_88 = '\0';
            FUN_00d235a0();
            local_90 = lVar7;
            local_40 = lVar7;
          }
          else {
            if (local_90 == 0) goto LAB_01355920;
LAB_01355850:
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if ((local_88 == '\0') && (local_90 != 0)) {
              FUN_00d50b00();
            }
            if ((local_90 == 0) || (local_90 == lVar6)) {
              if (local_90 != 0) goto LAB_01355755;
            }
            else {
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_014bb3e0();
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar16 = (double)FUN_014bb3e0();
              if (dVar15 < dVar16) {
                FUN_0133aef0();
                local_38 = '\0';
                FUN_01346520(lVar6,1);
                local_88 = '\0';
                FUN_00d235a0();
                local_90 = lVar7;
                local_40 = lVar7;
              }
LAB_01355755:
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_001150f0();
        FUN_00d50b20();
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar12 = lVar12 + 1;
      lVar6 = *param_2;
    } while (lVar12 < *(int *)(lVar6 + 0xc));
  }
  local_50 = -1;
LAB_01355b1b:
  do {
    lVar12 = local_90;
    lVar7 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar6 + 0xc) <= local_50) {
      FUN_01a02100();
      if (puVar5 != (undefined8 *)0x0) {
        if (0 < *(int *)((longlong)puVar5 + 0xc)) {
          pVar9 = 0;
          do {
            lVar6 = local_90;
            pVar10 = pVar9;
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_90 != 0) {
              local_88 = '\0';
              local_90 = 0;
              local_78 = -1;
              while( true ) {
                lVar12 = (longlong)local_78;
                local_78 = local_78 + 1;
                if (*(int *)(lVar6 + 0xc) <= local_78) break;
                lVar7 = *(longlong *)(lVar6 + 0x10);
                local_90 = *(longlong *)(lVar7 + 8 + lVar12 * 8);
                pvVar8 = _pthread_getspecific((pthread_key_t)lVar7);
                pVar10 = (pthread_key_t)lVar7;
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126f610();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                FUN_0039e8b0();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_00e7bdb0();
                FUN_01287c80();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            pVar9 = pVar9 + 1;
          } while ((int)pVar9 < *(int *)((longlong)puVar5 + 0xc));
        }
        FUN_001150f0();
      }
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + 8 + lVar7 * 8);
    FUN_01366a10();
    if (local_88 == '\0') goto LAB_01355bb0;
  } while (local_90 == 0);
  goto LAB_01355bc4;
LAB_01355bb0:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_01355bc4:
    local_88 = '\0';
    local_90 = 0;
    local_78 = -1;
    while( true ) {
      lVar7 = (longlong)local_78;
      local_78 = local_78 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_78) break;
      lVar11 = *(longlong *)(lVar12 + 0x10);
      local_90 = *(longlong *)(lVar11 + 8 + lVar7 * 8);
      cVar4 = FUN_00d23d70();
      pVar9 = (pthread_key_t)lVar11;
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar9);
        plVar13 = plVar1;
        if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x3a0))();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bcf30();
        FUN_00d21140();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      local_40 = local_90;
    }
    FUN_001150f0();
    FUN_00d50b20();
  }
  goto LAB_01355b1b;
}


