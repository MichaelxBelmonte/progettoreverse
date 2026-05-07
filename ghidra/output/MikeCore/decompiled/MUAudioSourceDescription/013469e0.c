// Function: FUN_013469e0
// Address: 013469e0
// Size: 3662 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x01347847) */
/* WARNING: Removing unreachable block (ram,0x01347857) */
/* WARNING: Removing unreachable block (ram,0x0134733b) */
/* WARNING: Removing unreachable block (ram,0x01347348) */
/* WARNING: Removing unreachable block (ram,0x013476cb) */
/* WARNING: Removing unreachable block (ram,0x013476db) */
/* WARNING: Removing unreachable block (ram,0x01347891) */
/* WARNING: Removing unreachable block (ram,0x0134789a) */

ulonglong FUN_013469e0(undefined8 param_1,longlong *param_2)

{
  dword dVar1;
  pthread_key_t pVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  void *pvVar15;
  longlong lVar16;
  pthread_key_t pVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  bool bVar23;
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  longlong local_78;
  longlong *local_70;
  char local_68;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar17 = 0x2572358;
  *puVar14 = &DAT_02572358;
  (*DAT_02572370)();
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar15 = _pthread_getspecific(pVar17);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar11 = FUN_0141bab0();
    if (iVar11 != 3) goto LAB_01346a4d;
    puVar18 = *(undefined8 **)(unaff_RDI + 0x40);
    plVar21 = param_2;
    if (*(int *)((longlong)puVar18 + 0xc) < 1) {
      bVar5 = false;
      local_78 = 0;
      bVar8 = false;
      local_48 = (longlong *)0x0;
      bVar9 = false;
      local_58 = (longlong *)0x0;
      bVar6 = false;
      local_40 = (longlong *)0x0;
    }
    else {
      plVar19 = (longlong *)0x0;
      local_40 = (longlong *)0x0;
      bVar6 = false;
      local_58 = (longlong *)0x0;
      bVar9 = false;
      local_48 = (longlong *)0x0;
      bVar8 = false;
      local_78 = 0;
      bVar5 = false;
      do {
        plVar3 = *(longlong **)(puVar18[2] + (longlong)plVar19 * 8);
        if (local_48 == plVar3) {
          if ((!bVar8) && (local_48 != (longlong *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar3;
          }
          else {
            bVar8 = true;
            local_48 = plVar3;
          }
        }
        pVar17 = (pthread_key_t)puVar18;
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_48;
        }
        FUN_013de560();
        if (local_70 == local_40) {
          if ((!bVar6) && (local_70 != (longlong *)0x0)) {
            bVar6 = true;
            if (local_68 != '\0') goto LAB_01346d6e;
            FUN_00d50b00();
LAB_01346d2a:
            bVar6 = true;
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (bVar6) {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b20();
              local_40 = local_70;
              goto LAB_01346d2a;
            }
            local_40 = local_70;
            bVar6 = true;
          }
          else {
            local_40 = local_70;
            bVar6 = true;
          }
        }
        else if ((bVar6) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = local_70;
          bVar6 = true;
        }
        else {
          local_40 = local_70;
          bVar6 = true;
        }
LAB_01346d6e:
        pvVar15 = _pthread_getspecific(pVar17);
        pVar2 = (pthread_key_t)local_40;
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = pVar2;
        }
        cVar10 = FUN_014bc070();
        if (cVar10 != '\0') {
          pvVar15 = _pthread_getspecific(pVar17);
          if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar17 = pVar2;
          }
          iVar11 = FUN_014c2f20();
          if (iVar11 == 0) {
            pvVar15 = _pthread_getspecific(pVar17);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pVar17 = pVar2;
            }
            FUN_014bc420();
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar21 = (longlong *)
                      CONCAT71((int7)((ulonglong)plVar21 >> 8),local_70 == (longlong *)0x0);
          }
          else {
            plVar21 = (longlong *)0x0;
          }
          pvVar15 = _pthread_getspecific(pVar17);
          if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar17 = pVar2;
          }
          FUN_014bc340();
          bVar23 = true;
          if (local_70 == (longlong *)0x0) {
            pvVar15 = _pthread_getspecific(pVar17);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pVar17 = pVar2;
            }
            iVar11 = FUN_014c2f20();
            bVar23 = iVar11 == 0;
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((bool)(bVar23 & (char)plVar21 == '\0')) {
            pvVar15 = _pthread_getspecific(pVar17);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_014c2f20();
            plVar21 = (longlong *)(ulonglong)uVar12;
            pvVar15 = _pthread_getspecific(pVar17);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar11 = FUN_014c2f80();
            local_e8 = FUN_00e7b4e0();
            lVar16 = *(longlong *)(unaff_RDI + 0x40);
            if (*(int *)(lVar16 + 0xc) < 1) {
              bVar23 = false;
LAB_013472cf:
              bVar4 = bVar23;
              if (iVar11 != *(int *)(unaff_RDI + 0x88) + -1) {
                bVar4 = true;
              }
            }
            else {
              plVar21 = (longlong *)0x0;
              bVar23 = false;
              bVar7 = false;
              lVar20 = local_78;
              do {
                local_78 = lVar20;
                if (plVar19 != plVar21) {
                  local_78 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + (longlong)plVar21 * 8);
                  lVar16 = lVar20;
                  if (lVar20 == local_78) {
                    local_78 = lVar20;
                    bVar4 = bVar5;
                    if ((!bVar5) && (lVar20 != 0)) {
                      FUN_00d50b00();
                      bVar4 = true;
                    }
                  }
                  else {
                    if (local_78 != 0) {
                      FUN_00d50b00();
                    }
                    bVar4 = true;
                    if ((bVar5) && (lVar20 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  bVar5 = bVar4;
                  pVar17 = (pthread_key_t)lVar16;
                  pvVar15 = _pthread_getspecific(pVar17);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013de560();
                  if (local_70 == local_58) {
                    if ((!bVar9) && (local_70 != (longlong *)0x0)) {
                      bVar9 = true;
                      if (local_68 != '\0') goto LAB_013471c7;
                      FUN_00d50b00();
LAB_01347186:
                      bVar9 = true;
                    }
                    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else if (local_68 == '\0') {
                    if (local_70 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    if (bVar9) {
                      if (local_58 != (longlong *)0x0) {
                        FUN_00d50b20();
                        local_58 = local_70;
                        goto LAB_01347186;
                      }
                      local_58 = local_70;
                      bVar9 = true;
                    }
                    else {
                      local_58 = local_70;
                      bVar9 = true;
                    }
                  }
                  else if ((bVar9) && (local_58 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    local_58 = local_70;
                    bVar9 = true;
                  }
                  else {
                    local_58 = local_70;
                    bVar9 = true;
                  }
LAB_013471c7:
                  pvVar15 = _pthread_getspecific(pVar17);
                  if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                    pVar17 = (pthread_key_t)local_58;
                  }
                  iVar13 = FUN_014c2f20();
                  pvVar15 = _pthread_getspecific(pVar17);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c2f80();
                  FUN_00e7b4e0();
                  cVar10 = FUN_00e7b530();
                  if (cVar10 != '\0') {
                    bVar23 = true;
                    bVar4 = true;
                    goto joined_r0x0134729e;
                  }
                  bVar7 = bVar23;
                  if (iVar13 == iVar11 + 1) {
                    bVar7 = true;
                  }
                  lVar16 = *(longlong *)(unaff_RDI + 0x40);
                  bVar23 = bVar7;
                }
                plVar21 = (longlong *)((longlong)plVar21 + 1);
                lVar20 = local_78;
              } while ((longlong)plVar21 < (longlong)*(int *)(lVar16 + 0xc));
              bVar23 = false;
              bVar4 = false;
joined_r0x0134729e:
              if (!bVar7) goto LAB_013472cf;
            }
            if (!bVar4) goto LAB_01346bb0;
          }
          local_70 = local_48;
          local_68 = '\0';
          FUN_00d21140();
        }
LAB_01346bb0:
        plVar19 = (longlong *)((longlong)plVar19 + 1);
        puVar18 = *(undefined8 **)(unaff_RDI + 0x40);
      } while ((longlong)plVar19 < (longlong)*(int *)((longlong)puVar18 + 0xc));
    }
    if (0 < *(int *)((longlong)puVar14 + 0xc)) {
      plVar21 = (longlong *)0x0;
      do {
        plVar19 = *(longlong **)(puVar14[2] + (longlong)plVar21 * 8);
        puVar18 = puVar14;
        if (local_48 == plVar19) {
          if ((!bVar8) && (local_48 != (longlong *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar19;
          }
          else {
            bVar8 = true;
            local_48 = plVar19;
          }
        }
        pVar17 = (pthread_key_t)puVar18;
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_48;
        }
        FUN_013de560();
        if (local_70 == local_40) {
          if ((!bVar6) && (local_70 != (longlong *)0x0)) {
            bVar6 = true;
            if (local_68 != '\0') goto LAB_0134754e;
            FUN_00d50b00();
LAB_0134750a:
            bVar6 = true;
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (bVar6) {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b20();
              local_40 = local_70;
              goto LAB_0134750a;
            }
            local_40 = local_70;
            bVar6 = true;
          }
          else {
            local_40 = local_70;
            bVar6 = true;
          }
        }
        else if ((bVar6) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = local_70;
          bVar6 = true;
        }
        else {
          local_40 = local_70;
          bVar6 = true;
        }
LAB_0134754e:
        FUN_0134c610();
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_40;
        }
        FUN_014d20e0();
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_40;
        }
        FUN_014d23d0();
        FUN_01327e70();
        FUN_01327a80();
        FUN_01328e30();
        pvVar15 = _pthread_getspecific(pVar17);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
        plVar21 = (longlong *)((longlong)plVar21 + 1);
        puVar18 = puVar14;
      } while ((longlong)plVar21 < (longlong)*(int *)((longlong)puVar14 + 0xc));
    }
    local_108 = *param_2;
    local_100 = 0;
    FUN_0139d310(puVar18,&local_108);
    if (local_70 == (longlong *)0x0) {
      bVar23 = true;
      local_70 = (longlong *)0x0;
      dVar1 = MACH_HEADER.filetype;
    }
    else {
      if (local_68 == '\0') {
        FUN_00d50b00();
      }
      bVar23 = false;
      dVar1 = *(dword *)((longlong)local_70 + 0xc);
    }
    if (0 < (int)dVar1) {
      lVar16 = 0;
      do {
        plVar21 = *(longlong **)(local_70[2] + lVar16 * 8);
        if (local_48 == plVar21) {
          if ((!bVar8) && (local_48 != (longlong *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar21 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar21;
          }
          else {
            bVar8 = true;
            local_48 = plVar21;
          }
        }
        local_f8 = *unaff_RSI;
        local_f0 = 0;
        FUN_01399490();
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((longlong)local_70 + 0xc));
    }
    if (*param_2 != 0) {
      FUN_00d214d0();
    }
    if (!bVar23) {
      FUN_00d50b20();
    }
    uVar22 = CONCAT71((int7)((ulonglong)plVar21 >> 8),1);
    if (puVar14 == (undefined8 *)0x0) goto LAB_01346a88;
  }
  else {
LAB_01346a4d:
    uVar22 = 0;
    bVar5 = false;
    local_78 = 0;
    bVar8 = false;
    local_48 = (longlong *)0x0;
    bVar9 = false;
    local_58 = (longlong *)0x0;
    bVar6 = false;
    local_40 = (longlong *)0x0;
  }
  FUN_00d50b20();
LAB_01346a88:
  if ((bVar5) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar22 & 0xffffffff;
}


