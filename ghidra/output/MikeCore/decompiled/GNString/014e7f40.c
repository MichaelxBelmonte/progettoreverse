// Function: FUN_014e7f40
// Address: 014e7f40
// Size: 2467 bytes
// Class: GNString


/* WARNING: Type propagation algorithm not settling */

longlong FUN_014e7f40(char *param_1,char param_2,char param_3)

{
  dword dVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong unaff_RSI;
  char *pcVar14;
  longlong *unaff_RDI;
  double dVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar16;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong local_90;
  char *local_88;
  char *local_58;
  longlong *local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  pcVar12 = param_1;
  (**(code **)(*unaff_RDI + 0x378))();
  pVar11 = (pthread_key_t)pcVar12;
  if ((((local_48[0] == '\0') && (local_50 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar11);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_01326de0();
  if (iVar4 == 3) {
    pvVar5 = _pthread_getspecific(pVar11);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar5 = _pthread_getspecific(pVar11);
    plVar13 = local_50;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar13 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    dVar15 = (double)(**(code **)(*plVar13 + 0x370))();
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = (**(code **)(*unaff_RDI + 0x380))();
    local_98 = (**(code **)(*unaff_RDI + 0x388))();
    lVar7 = (**(code **)(*unaff_RDI + 0x398))();
    lVar10 = 0;
    lVar6 = unaff_RSI;
    if (param_2 != '\0') {
      lVar10 = unaff_RSI;
      lVar6 = 0;
    }
    if (param_3 == '\0') {
      if (param_2 == '\0') {
        if (unaff_RDI[0x23] != 0) {
          local_40 = unaff_RDI[0x23];
          FUN_00d50b00();
          pvVar5 = _pthread_getspecific(pVar11);
          local_88 = param_1;
          if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar2 = *(longlong *)(local_40 + 0x110);
            lVar8 = local_40;
          }
          else {
            lVar8 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            lVar2 = *(longlong *)(lVar8 + 0x110);
          }
          if (lVar2 != 0) {
            FUN_00d64850();
            *(undefined8 *)(lVar8 + 0x110) = 0;
            FUN_00d64910();
          }
          if (unaff_RDI[0x23] != 0) {
            FUN_00d64850();
            unaff_RDI[0x23] = 0;
            FUN_00d64910();
          }
          FUN_00d50b20();
          param_1 = local_88;
        }
      }
      else if (unaff_RDI[0x22] != 0) {
        local_88 = param_1;
        local_40 = unaff_RDI[0x22];
        FUN_00d50b00();
        if (unaff_RDI[0x22] != 0) {
          FUN_00d64850();
          unaff_RDI[0x22] = 0;
          FUN_00d64910();
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar2 = *(longlong *)(local_40 + 0x118);
          lVar8 = local_40;
        }
        else {
          lVar8 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          lVar2 = *(longlong *)(lVar8 + 0x118);
        }
        if (lVar2 != 0) {
          FUN_00d64850();
          *(undefined8 *)(lVar8 + 0x118) = 0;
          FUN_00d64910();
        }
        FUN_00d50b20();
        param_1 = local_88;
      }
    }
    cVar3 = (**(code **)(*unaff_RDI + 1000))();
    if (cVar3 != '\0') {
      pVar11 = (pthread_key_t)(dVar15 * DAT_0241b6a8);
      local_98 = local_98 + local_90;
      pcVar14 = (char *)(lVar6 + local_98);
      local_58 = (char *)(lVar10 + local_90);
      pcVar12 = (char *)(longlong)(int)pVar11;
      if (param_2 == '\0') {
        if ((longlong)pcVar14 - (longlong)local_58 < (longlong)pcVar12) {
          pcVar14 = local_58 + (longlong)pcVar12;
        }
        if ((longlong)param_1 < (longlong)pcVar14) {
          pcVar14 = param_1;
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0134c230();
        if (unaff_RSI < 1) {
          while( true ) {
            cVar3 = (**(code **)(*unaff_RDI + 1000))();
            pVar11 = (pthread_key_t)pcVar12;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              FUN_00d23340();
              local_38[0] = local_48[0];
              pcVar12 = local_38;
              pcVar9 = local_48;
              if (local_48[0] == '\0') {
                pcVar9 = pcVar12;
              }
              *pcVar9 = '\0';
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)((longlong)local_50 + 0xc);
              FUN_00d50b20();
              pVar11 = (pthread_key_t)pcVar12;
            }
            if ((int)dVar1 <= iVar4) break;
            cVar3 = (**(code **)(*unaff_RDI + 1000))();
            if (cVar3 == '\0') {
              plVar13 = (longlong *)0x0;
            }
            else {
              FUN_00d23340();
              local_38[0] = local_48[0];
              pcVar12 = local_38;
              pcVar9 = local_48;
              if (local_48[0] == '\0') {
                pcVar9 = pcVar12;
              }
              *pcVar9 = '\0';
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar13 = local_50;
              if ((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
            }
            FUN_014c2cf0();
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          while( true ) {
            cVar3 = (**(code **)(*unaff_RDI + 1000))();
            pVar11 = (pthread_key_t)pcVar12;
            uVar16 = extraout_XMM0_Qa;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              FUN_00d23340();
              local_38[0] = local_48[0];
              pcVar12 = local_38;
              pcVar9 = local_48;
              if (local_48[0] == '\0') {
                pcVar9 = pcVar12;
              }
              *pcVar9 = '\0';
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)((longlong)local_50 + 0xc);
              uVar16 = FUN_00d50b20();
              pVar11 = (pthread_key_t)pcVar12;
            }
            if (iVar4 <= (int)dVar1) break;
            FUN_014d63b0(uVar16,1);
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar6 = (longlong)pcVar14 - local_98;
      }
      else {
        if ((longlong)pcVar14 - (longlong)local_58 < (longlong)pcVar12) {
          local_58 = pcVar14 + -(longlong)pcVar12;
        }
        if ((longlong)local_58 < (longlong)param_1) {
          local_58 = param_1;
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0134c230();
        if (unaff_RSI < 0) {
          while( true ) {
            cVar3 = (**(code **)(*unaff_RDI + 1000))();
            pVar11 = (pthread_key_t)pcVar12;
            uVar16 = extraout_XMM0_Qa_00;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10);
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)(lVar6 + 0xc);
              uVar16 = FUN_00d50b20();
              pVar11 = (pthread_key_t)pcVar12;
            }
            if ((int)dVar1 <= iVar4) break;
            FUN_014d61f0(uVar16,1);
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          while( true ) {
            cVar3 = (**(code **)(*unaff_RDI + 1000))();
            pVar11 = (pthread_key_t)pcVar12;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10);
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)(lVar6 + 0xc);
              FUN_00d50b20();
              pVar11 = (pthread_key_t)pcVar12;
            }
            if (iVar4 <= (int)dVar1) break;
            cVar3 = (**(code **)(*unaff_RDI + 1000))();
            if (cVar3 == '\0') {
              lVar6 = 0;
            }
            else {
              lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10);
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
            }
            FUN_014c2cf0();
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
        lVar8 = (**(code **)(*unaff_RDI + 0x390))();
        FUN_00d64850();
        lVar6 = (longlong)local_58 - local_90;
        lVar10 = 0;
        if (-1 < lVar8 - lVar6) {
          lVar10 = lVar8 - lVar6;
        }
        unaff_RDI[0x1a] = lVar10;
        FUN_00d64910();
      }
      FUN_014bb250();
      FUN_014bb2b0();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_01334f30();
      if (cVar3 != '\0') {
        local_b0 = '\0';
        local_b8 = local_50;
        FUN_014c0100(&local_b8,1);
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_014bd410();
      }
      if (param_3 == '\0') {
        local_a0 = '\0';
        local_a8 = 0;
        FUN_014dcf30();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar10 = (**(code **)(*unaff_RDI + 0x388))();
        lVar7 = (lVar7 + local_90) - (longlong)local_58;
        if (lVar10 < lVar7) {
          lVar7 = (**(code **)(*unaff_RDI + 0x388))();
        }
        FUN_00d64850();
        unaff_RDI[0x1b] = lVar7;
        FUN_00d64910();
      }
      FUN_014bfad0();
      goto LAB_014e88f7;
    }
  }
  lVar6 = 0;
LAB_014e88f7:
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return lVar6;
}


