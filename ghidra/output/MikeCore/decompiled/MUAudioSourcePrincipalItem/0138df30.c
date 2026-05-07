// Function: FUN_0138df30
// Address: 0138df30
// Size: 3537 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x0138e02a) */
/* WARNING: Removing unreachable block (ram,0x0138e6b6) */
/* WARNING: Removing unreachable block (ram,0x0138e6bc) */
/* WARNING: Removing unreachable block (ram,0x0138e6c1) */
/* WARNING: Removing unreachable block (ram,0x0138e7ed) */
/* WARNING: Removing unreachable block (ram,0x0138e7f8) */
/* WARNING: Removing unreachable block (ram,0x0138e870) */
/* WARNING: Removing unreachable block (ram,0x0138e7fd) */
/* WARNING: Removing unreachable block (ram,0x0138e604) */
/* WARNING: Removing unreachable block (ram,0x0138e60d) */
/* WARNING: Removing unreachable block (ram,0x0138e6dc) */
/* WARNING: Removing unreachable block (ram,0x0138e6df) */
/* WARNING: Removing unreachable block (ram,0x0138ebac) */
/* WARNING: Removing unreachable block (ram,0x0138e735) */
/* WARNING: Removing unreachable block (ram,0x0138e73e) */
/* WARNING: Removing unreachable block (ram,0x0138e898) */
/* WARNING: Removing unreachable block (ram,0x0138e8a0) */
/* WARNING: Removing unreachable block (ram,0x0138e8a9) */
/* WARNING: Removing unreachable block (ram,0x0138e3a7) */
/* WARNING: Removing unreachable block (ram,0x0138e3a5) */
/* WARNING: Removing unreachable block (ram,0x0138e3c9) */
/* WARNING: Removing unreachable block (ram,0x0138e3cb) */
/* WARNING: Removing unreachable block (ram,0x0138e030) */
/* WARNING: Removing unreachable block (ram,0x0138e052) */
/* WARNING: Removing unreachable block (ram,0x0138e032) */
/* WARNING: Removing unreachable block (ram,0x0138e055) */
/* WARNING: Removing unreachable block (ram,0x0138ec07) */
/* WARNING: Removing unreachable block (ram,0x0138ec10) */

ulonglong FUN_0138df30(pthread_key_t param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined8 extraout_XMM0_Qa;
  double dVar20;
  double dVar21;
  double dVar22;
  longlong *local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  undefined8 *local_f8;
  undefined1 local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  int local_78;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  
  if ((((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) &&
      (*(longlong *)(unaff_RDI + 0x1f8) == 0)) &&
     ((*(longlong *)(unaff_RDI + 0x200) == 0 && (*(longlong *)(unaff_RDI + 0x148) != 0)))) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_0141bab0();
    if (iVar6 == 1) {
      lVar14 = *unaff_RSI;
      uVar17 = 0;
      if (lVar14 == 0) goto LAB_0138df6c;
      local_78 = -1;
      bVar2 = false;
      local_40 = (longlong *)0x0;
      bVar18 = false;
      while (local_78 = local_78 + 1, local_78 < *(int *)(lVar14 + 0xc)) {
        pVar11 = (pthread_key_t)*(undefined8 *)(lVar14 + 0x10);
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        if (local_58 == local_40) {
          if ((!bVar2) && (local_58 != (longlong *)0x0)) {
            plVar16 = local_40;
            bVar3 = true;
            if (local_50 != '\0') goto LAB_0138e165;
            bVar2 = true;
            FUN_00d50b00();
          }
LAB_0138e151:
          plVar16 = local_40;
          bVar3 = bVar2;
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar16 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_40 = local_58;
              bVar2 = true;
              goto LAB_0138e151;
            }
          }
          else {
            bVar3 = true;
            if ((bVar2) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
LAB_0138e165:
        bVar2 = bVar3;
        pvVar7 = _pthread_getspecific(pVar11);
        plVar15 = plVar16;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar15 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        uVar19 = (**(code **)(*plVar15 + 0x3e0))();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_014ea7b0(uVar19,DAT_02390124);
        if (cVar5 != '\0') {
          bVar18 = true;
        }
        local_110 = 0;
        local_118 = plVar16;
        FUN_013699d0(extraout_XMM0_Qa,&local_118);
        if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (0 < *(int *)((longlong)local_58 + 0xc)) {
          lVar8 = 0;
          do {
            lVar10 = *(longlong *)(local_58[2] + lVar8 * 8);
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            local_100 = 1;
            local_108 = lVar10;
            FUN_013295b0();
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((longlong)local_58 + 0xc));
        }
        FUN_00d50b20();
        local_40 = plVar16;
      }
      FUN_001150f0();
      if (bVar18) {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        pVar11 = 0x2572358;
        *puVar9 = &DAT_02572358;
        (*DAT_02572370)();
        lVar14 = *unaff_RSI;
        if (lVar14 == 0) {
          plVar15 = (longlong *)0x0;
          bVar3 = false;
          bVar18 = false;
          plVar16 = (longlong *)0x0;
        }
        else {
          local_78 = -1;
          plVar15 = (longlong *)0x0;
          bVar3 = false;
          bVar18 = false;
          plVar16 = (longlong *)0x0;
          while( true ) {
            lVar8 = (longlong)local_78;
            local_78 = local_78 + 1;
            if (*(int *)(lVar14 + 0xc) <= local_78) break;
            lVar10 = *(longlong *)(lVar14 + 0x10);
            plVar1 = *(longlong **)(lVar10 + 8 + lVar8 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar10);
            pVar11 = (pthread_key_t)lVar10;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_58 == local_40) {
              if ((!bVar2) && (local_58 != (longlong *)0x0)) {
                bVar2 = true;
                if (local_50 != '\0') goto LAB_0138e4db;
                bVar2 = true;
                FUN_00d50b00();
              }
LAB_0138e4c7:
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_50 == '\0') {
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar2) && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  local_40 = local_58;
                  bVar2 = true;
                }
                else {
                  local_40 = local_58;
                  bVar2 = true;
                }
                goto LAB_0138e4c7;
              }
              if ((bVar2) && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
                local_40 = local_58;
                bVar2 = true;
              }
              else {
                local_40 = local_58;
                bVar2 = true;
              }
            }
LAB_0138e4db:
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_e0 = '\0';
            local_e8 = 0;
            plVar12 = &local_e8;
            FUN_014c0100(plVar12,1);
            pVar11 = (pthread_key_t)plVar12;
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
            FUN_00d21140();
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (plVar1 == plVar16) {
              plVar12 = plVar16;
              bVar4 = bVar18;
              if ((!bVar18) && (plVar1 != (longlong *)0x0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              plVar12 = plVar1;
              if ((bVar18) && (plVar16 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar18 = bVar4;
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if (0 < *(int *)((longlong)plVar12 + 0xc)) {
              lVar8 = 0;
              plVar16 = plVar15;
              do {
                plVar13 = plVar12;
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if (plVar1 == plVar16) {
                  plVar15 = plVar16;
                  bVar4 = bVar3;
                  if ((!bVar3) && (plVar1 != (longlong *)0x0)) {
                    FUN_00d50b00();
                    goto LAB_0138e868;
                  }
                }
                else {
                  if (plVar1 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  plVar15 = plVar1;
                  bVar4 = true;
                  if ((bVar3) && (plVar16 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    plVar16 = plVar1;
LAB_0138e868:
                    plVar15 = plVar16;
                    bVar4 = true;
                  }
                }
                bVar3 = bVar4;
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar13);
                plVar16 = local_40;
                if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  plVar13 = local_40;
                  plVar16 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
                }
                pVar11 = (pthread_key_t)plVar13;
                (**(code **)(*plVar16 + 0x3e0))();
                FUN_012595a0();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013def20();
                FUN_01264320();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar20 = (double)FUN_013defa0();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar21 = (double)FUN_01264170();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar22 = (double)FUN_013de9b0();
                FUN_01264390((dVar20 + dVar21) - dVar22);
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126f610();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                local_c0 = '\0';
                local_c8 = plVar15;
                FUN_0039e8b0();
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                FUN_012879b0();
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                lVar8 = lVar8 + 1;
                plVar16 = plVar15;
              } while (lVar8 < *(int *)((longlong)plVar12 + 0xc));
            }
            local_50 = '\0';
            plVar16 = plVar12;
            local_58 = plVar1;
          }
          FUN_001150f0();
          pVar11 = (pthread_key_t)lVar14;
        }
        if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
           (*(longlong *)(unaff_RDI + 0x148) != 0)) {
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_0141bab0();
          if (iVar6 != 3) goto LAB_0138ec7b;
LAB_0138ec8b:
          local_f0 = 0;
          local_f8 = puVar9;
          FUN_013357a0();
        }
        else {
LAB_0138ec7b:
          cVar5 = FUN_01334f30();
          if (cVar5 != '\0') goto LAB_0138ec8b;
        }
        if ((bVar3) && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar18) && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar17 = CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        uVar17 = 0;
      }
      if ((bVar2) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0138df6c;
    }
  }
  uVar17 = 0;
LAB_0138df6c:
  return uVar17 & 0xffffffff;
}


