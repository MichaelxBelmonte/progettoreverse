// Function: FUN_01281db0
// Address: 01281db0
// Size: 9842 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */

void FUN_01281db0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  dword dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  pthread_key_t pVar15;
  longlong lVar16;
  longlong *plVar17;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong *unaff_R13;
  char cVar18;
  uint uVar19;
  undefined7 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  longlong *local_108;
  double local_f8;
  double local_e0;
  longlong local_d8;
  char local_d0;
  ulonglong local_b8;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  char local_58 [8];
  char local_50 [8];
  longlong *local_48;
  longlong *local_40;
  double local_38;
  
  if (unaff_ESI == 0) {
    return;
  }
  plVar10 = (longlong *)(ulonglong)*(uint *)(*unaff_RDI + 0xc);
  while (0 < (int)plVar10) {
    uVar19 = (int)plVar10 - 1;
    plVar10 = (longlong *)(ulonglong)uVar19;
    lVar16 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + (longlong)plVar10 * 8);
    pvVar6 = _pthread_getspecific(uVar19);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar16 = *(longlong *)(lVar16 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    if (*(longlong *)(lVar16 + 200) == 0) {
      return;
    }
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_01271180();
  local_108 = local_68;
  if (local_68 == (longlong *)0x0) {
    uVar5 = true;
    local_108 = (longlong *)0x0;
    dVar1 = MACH_HEADER.filetype;
  }
  else {
    if (local_60[0] == '\0') {
      FUN_00d50b00();
    }
    uVar5 = false;
    dVar1 = *(dword *)((longlong)local_108 + 0xc);
  }
  if ((int)dVar1 < 1) {
    local_b8 = 0;
    local_78 = (longlong *)0x0;
    bVar3 = false;
    local_48 = (longlong *)0x0;
    local_90 = 0;
    local_40 = (longlong *)0x0;
    local_88 = (longlong *)0x0;
    plVar17 = (longlong *)0x0;
    bVar2 = false;
    local_98 = (longlong *)0x0;
    uVar8 = local_90;
    plVar14 = local_40;
    plVar12 = local_98;
  }
  else {
    lVar16 = 0;
    local_98 = (longlong *)0x0;
    bVar2 = false;
    plVar17 = (longlong *)0x0;
    local_88 = (longlong *)0x0;
    local_70 = (longlong *)0x0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    bVar3 = false;
    local_78 = (longlong *)0x0;
    local_b8 = 0;
    do {
      plVar12 = *(longlong **)(*(longlong *)((longlong)local_108 + 0x10) + lVar16 * 8);
      if (local_98 == plVar12) {
        if ((!bVar2) && (local_98 != (longlong *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_98 != (longlong *)0x0)) {
          local_98 = plVar12;
          FUN_00d50b20();
          bVar2 = true;
        }
        else {
          bVar2 = true;
          local_98 = plVar12;
        }
      }
      FUN_00d23310();
      plVar14 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar12 = &local_a8;
      plVar9 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar9 = plVar12;
      }
      *(undefined1 *)plVar9 = 0;
      if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (pthread_key_t)plVar12;
      uVar20 = (undefined7)((ulonglong)plVar10 >> 8);
      if (plVar14 == plVar17) {
        if (((char)local_88 == '\0') && (plVar14 != (longlong *)0x0)) {
          plVar10 = (longlong *)CONCAT71(uVar20,1);
          plVar14 = plVar17;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a8 == '\0') || (plVar14 == (longlong *)0x0)) {
          plVar10 = (longlong *)((ulonglong)local_88 & 0xffffffff);
          plVar14 = plVar17;
        }
        else {
          FUN_00d50b20();
          plVar10 = (longlong *)((ulonglong)local_88 & 0xffffffff);
          plVar14 = plVar17;
        }
      }
      else if ((char)local_a8 == '\0') {
        if (plVar14 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar10 = (longlong *)CONCAT71(uVar20,1);
        if (((char)local_88 == '\0') || (plVar17 == (longlong *)0x0)) goto LAB_012820b0;
        FUN_00d50b20();
      }
      else {
        plVar10 = (longlong *)CONCAT71(uVar20,1);
        if (((char)local_88 == '\0') || (plVar17 == (longlong *)0x0)) {
LAB_012820b0:
          plVar10 = (longlong *)CONCAT71(uVar20,1);
        }
        else {
          FUN_00d50b20();
        }
      }
      pvVar6 = _pthread_getspecific(pVar15);
      if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = plVar14[0x19];
      }
      else {
        lVar7 = *(longlong *)(plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar15);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_0152ebe0();
      plVar17 = local_68;
      uVar20 = (undefined7)((ulonglong)unaff_R13 >> 8);
      if (local_68 == local_78) {
        plVar17 = local_78;
        if (((char)local_b8 != '\0') || (local_68 == (longlong *)0x0)) {
          unaff_R13 = (longlong *)(local_b8 & 0xffffffff);
          goto joined_r0x01282233;
        }
        if (local_60[0] == '\0') {
          FUN_00d50b00();
          goto LAB_01282250;
        }
LAB_012821c8:
        local_60[0] = '\0';
        local_b8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        local_78 = plVar17;
      }
      else {
        if (local_60[0] != '\0') {
          if (((char)local_b8 != '\0') && (local_78 != (longlong *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
          goto LAB_012821c8;
        }
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        unaff_R13 = (longlong *)CONCAT71(uVar20,1);
        if (((char)local_b8 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_78 = plVar17;
LAB_01282250:
          unaff_R13 = (longlong *)CONCAT71(uVar20,1);
          plVar17 = local_78;
        }
joined_r0x01282233:
        local_78 = plVar17;
        if ((local_60[0] == '\0') || (local_68 == (longlong *)0x0)) {
          local_b8 = (ulonglong)unaff_R13 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_b8 = (ulonglong)unaff_R13 & 0xffffffff;
        }
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar15);
      if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        if (plVar14[0x20] != 0) goto LAB_012822ef;
LAB_012822be:
        local_a0 = '\0';
        local_a8 = 0;
      }
      else {
        if (*(longlong *)(plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x100) == 0)
        goto LAB_012822be;
LAB_012822ef:
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      pvVar6 = _pthread_getspecific(pVar15);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      plVar17 = local_68;
      if (local_68 == local_48) {
        plVar17 = local_48;
        bVar4 = bVar3;
        if ((bVar3) || (local_68 == (longlong *)0x0)) goto joined_r0x01282433;
        if (local_60[0] == '\0') {
          FUN_00d50b00();
          goto LAB_01282450;
        }
LAB_012823c8:
        local_60[0] = '\0';
        bVar3 = true;
        local_48 = plVar17;
      }
      else {
        if (local_60[0] != '\0') {
          if ((bVar3) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_012823c8;
        }
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar3) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_48 = plVar17;
LAB_01282450:
          plVar17 = local_48;
          bVar4 = true;
        }
joined_r0x01282433:
        local_48 = plVar17;
        bVar3 = bVar4;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      plVar17 = plVar14;
      if (unaff_ESI == 0) goto LAB_0128455e;
      if (unaff_ESI < 0) {
        pvVar6 = _pthread_getspecific(pVar15);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar14[0x15];
        }
        else {
          lVar7 = *(longlong *)(plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          if (param_2 == 0) {
            pvVar6 = _pthread_getspecific(pVar15);
            if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
              lVar7 = plVar14[0x15];
            }
            else {
              lVar7 = *(longlong *)(plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8);
            }
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            pvVar6 = _pthread_getspecific(pVar15);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            local_40 = local_68;
            plVar12 = local_68;
            if (local_68 == local_70) {
              if (((char)local_80 != '\0') || (local_68 == (longlong *)0x0)) {
                local_90 = local_80;
                local_40 = local_70;
                goto LAB_012826db;
              }
              if (local_60[0] != '\0') {
                local_40 = local_70;
                plVar9 = local_70;
                goto LAB_0128268c;
              }
              local_90 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
              plVar9 = local_70;
              FUN_00d50b00();
              local_40 = plVar9;
              if (local_60[0] == '\0') goto LAB_012826ef;
LAB_012826e1:
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            else if (local_60[0] == '\0') {
              uVar8 = 0;
              if (local_68 != (longlong *)0x0) {
                uVar8 = FUN_00d50b00();
              }
              local_90 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              if (((char)local_80 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_012826db:
              if (local_60[0] != '\0') goto LAB_012826e1;
            }
            else {
              plVar9 = local_68;
              if (((char)local_80 != '\0') && (local_70 != (longlong *)0x0)) {
                plVar9 = (longlong *)FUN_00d50b20();
              }
LAB_0128268c:
              local_60[0] = '\0';
              local_90 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
            }
LAB_012826ef:
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
            plVar9 = local_40;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar9 = local_40, lVar7 != 0))
            {
              plVar9 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              plVar12 = local_40;
            }
            dVar22 = (double)plVar9[0x1e];
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
            plVar9 = local_40;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar9 = local_40, lVar7 != 0))
            {
              plVar12 = local_40;
              plVar9 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            if (unaff_ESI != 0) {
              dVar21 = (double)plVar9[0x28] + DAT_02391030 + DAT_02391030;
              dVar23 = DAT_0241b6a8;
              if (DAT_0241b6a8 <= dVar21) {
                dVar23 = dVar21;
              }
              dVar21 = (double)plVar9[0x1e];
              if (dVar23 <= (double)plVar9[0x1e]) {
                dVar21 = dVar23;
              }
              while( true ) {
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_48;
                }
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_78;
                }
                uVar8 = FUN_01507970();
                local_88 = (longlong *)FUN_016c98e0(uVar8,0);
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_48;
                }
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_78;
                }
                local_68 = (longlong *)FUN_01507970();
                uVar8 = FUN_00e7b820();
                dVar23 = (double)FUN_016c98e0(uVar8,0);
                if ((double)local_88 - dVar23 <= dVar22 - dVar21) break;
                unaff_ESI = unaff_ESI + 1;
                uVar8 = local_90;
                plVar9 = local_40;
                if (unaff_ESI == 0) goto joined_r0x0128461f;
              }
            }
            local_80 = local_90;
            local_70 = local_40;
          }
        }
        if (unaff_ESI == 0) goto LAB_0128455e;
      }
      FUN_00d23340();
      plVar17 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar12 = &local_a8;
      plVar9 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar9 = plVar12;
      }
      *(undefined1 *)plVar9 = 0;
      if ((local_60[0] != '\0') && (plVar17 != (longlong *)0x0)) {
        plVar9 = (longlong *)FUN_00d50b20();
      }
      cVar18 = (char)plVar10;
      if (plVar17 == plVar14) {
        if ((cVar18 == '\0') && (plVar17 != (longlong *)0x0)) {
          plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
          plVar17 = plVar14;
          local_88 = plVar12;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a8 == '\0') || (plVar17 == (longlong *)0x0)) {
          local_88 = (longlong *)((ulonglong)plVar10 & 0xffffffff);
          plVar17 = plVar14;
        }
        else {
          FUN_00d50b20();
          local_88 = (longlong *)((ulonglong)plVar10 & 0xffffffff);
          plVar17 = plVar14;
        }
      }
      else if ((char)local_a8 == '\0') {
        if (plVar17 != (longlong *)0x0) {
          plVar9 = (longlong *)FUN_00d50b00();
        }
        local_88 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
        if ((cVar18 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
        if ((cVar18 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
      if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = plVar17[0x19];
      }
      else {
        lVar7 = *(longlong *)(plVar17[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_0152ebe0();
      plVar14 = local_68;
      if (local_68 == local_78) {
        if (((char)local_b8 == '\0') && (local_68 != (longlong *)0x0)) {
          plVar14 = local_78;
          if (local_60[0] != '\0') goto LAB_01282b68;
          FUN_00d50b00();
          plVar14 = local_78;
          goto joined_r0x01282db3;
        }
        plVar10 = (longlong *)(local_b8 & 0xffffffff);
joined_r0x01282bd3:
        if ((local_60[0] == '\0') || (local_68 == (longlong *)0x0)) {
          local_b8 = (ulonglong)plVar10 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_b8 = (ulonglong)plVar10 & 0xffffffff;
        }
      }
      else {
        if (local_60[0] == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (((char)local_b8 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
joined_r0x01282db3:
          plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
          local_78 = plVar14;
          goto joined_r0x01282bd3;
        }
        if (((char)local_b8 != '\0') && (local_78 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
LAB_01282b68:
        local_60[0] = '\0';
        local_b8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        local_78 = plVar14;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (0 < unaff_ESI) {
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar17[0x14];
        }
        else {
          lVar7 = *(longlong *)(plVar17[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pVar15 = (pthread_key_t)plVar12;
          if (param_2 == 2) {
            pvVar6 = _pthread_getspecific(pVar15);
            if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
              lVar7 = plVar17[0x14];
            }
            else {
              lVar7 = *(longlong *)(plVar17[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa0);
            }
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            pvVar6 = _pthread_getspecific(pVar15);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            local_40 = local_68;
            plVar12 = local_68;
            if (local_68 == local_70) {
              if (((char)local_80 != '\0') || (local_68 == (longlong *)0x0)) {
                local_90 = local_80;
                local_40 = local_70;
                goto LAB_01282e28;
              }
              if (local_60[0] != '\0') {
                local_40 = local_70;
                plVar10 = local_70;
                goto LAB_01282d99;
              }
              local_90 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
              plVar10 = local_70;
              FUN_00d50b00();
              local_40 = plVar10;
              if (local_60[0] == '\0') goto LAB_01282e3c;
LAB_01282e2e:
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            else if (local_60[0] == '\0') {
              uVar8 = 0;
              if (local_68 != (longlong *)0x0) {
                uVar8 = FUN_00d50b00();
              }
              local_90 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              if (((char)local_80 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01282e28:
              if (local_60[0] != '\0') goto LAB_01282e2e;
            }
            else {
              plVar10 = local_68;
              if (((char)local_80 != '\0') && (local_70 != (longlong *)0x0)) {
                plVar10 = (longlong *)FUN_00d50b20();
              }
LAB_01282d99:
              local_60[0] = '\0';
              local_90 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
            }
LAB_01282e3c:
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
            plVar10 = local_40;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar10 = local_40, lVar7 != 0))
            {
              plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              plVar12 = local_40;
            }
            local_38 = (double)plVar10[0x1e];
            plVar10 = (longlong *)((ulonglong)local_88 & 0xffffffff);
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
            plVar14 = local_40;
            if (pvVar6 != (void *)0x0) {
              plVar10 = (longlong *)((ulonglong)local_88 & 0xffffffff);
              lVar7 = FUN_00e8b990();
              plVar14 = local_40;
              if (lVar7 != 0) {
                plVar12 = local_40;
                plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
            }
            if (unaff_ESI != 0) {
              dVar23 = (double)plVar14[0x28] + DAT_02391030 + DAT_02391030;
              dVar22 = DAT_0241b6a8;
              if (DAT_0241b6a8 <= dVar23) {
                dVar22 = dVar23;
              }
              dVar23 = (double)plVar14[0x1e];
              if (dVar22 <= (double)plVar14[0x1e]) {
                dVar23 = dVar22;
              }
              local_38 = local_38 - dVar23;
              do {
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_48;
                }
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_78;
                }
                uVar8 = FUN_01508610();
                dVar22 = (double)FUN_016c98e0(uVar8,0);
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_48;
                }
                pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar12 = local_78;
                }
                local_68 = (longlong *)FUN_01508610();
                uVar8 = FUN_00e7b820();
                dVar23 = (double)FUN_016c98e0(uVar8,0);
              } while ((local_38 < dVar23 - dVar22) && (unaff_ESI = unaff_ESI + -1, unaff_ESI != 0))
              ;
            }
            local_80 = local_90;
            local_70 = local_40;
          }
        }
      }
      if (unaff_ESI == 0) goto LAB_01284557;
      if (*(int *)((longlong)local_98 + 0xc) < 1) {
        dVar22 = 0.0;
      }
      else {
        local_38 = 0.0;
        lVar7 = 0;
        do {
          lVar11 = local_98[2];
          plVar14 = *(longlong **)(lVar11 + lVar7 * 8);
          if (plVar17 == plVar14) {
            if (((char)local_88 == '\0') && (plVar17 != (longlong *)0x0)) {
              local_88 = (longlong *)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
              plVar10 = (longlong *)0x0;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar14 != (longlong *)0x0) {
              plVar10 = (longlong *)((ulonglong)local_88 & 0xffffffff);
              lVar11 = FUN_00d50b00();
            }
            if (((char)local_88 == '\0') || (plVar17 == (longlong *)0x0)) {
              local_88 = (longlong *)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
              plVar17 = plVar14;
            }
            else {
              plVar10 = (longlong *)((ulonglong)local_88 & 0xffffffff);
              uVar8 = FUN_00d50b20();
              local_88 = (longlong *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              plVar17 = plVar14;
            }
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          plVar14 = plVar17;
          if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            plVar14 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          dVar22 = (double)plVar14[0x28] + DAT_02391030;
          dVar23 = (double)plVar14[0x1e];
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          plVar14 = plVar17;
          if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            plVar14 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          dVar22 = dVar22 + DAT_02391030;
          dVar21 = DAT_0241b6a8;
          if (DAT_0241b6a8 <= dVar22) {
            dVar21 = dVar22;
          }
          if (dVar21 <= dVar23) {
            dVar23 = dVar21;
          }
          dVar22 = dVar23 / (double)plVar14[0x1e];
          if (dVar23 / (double)plVar14[0x1e] <= local_38) {
            dVar22 = local_38;
          }
          lVar7 = lVar7 + 1;
          local_38 = dVar22;
        } while (lVar7 < *(int *)((longlong)local_98 + 0xc));
      }
      FUN_00d23340();
      plVar14 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar12 = &local_a8;
      plVar9 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar9 = plVar12;
      }
      *(undefined1 *)plVar9 = 0;
      if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
      plVar12 = plVar14;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      local_38 = (double)plVar12[0x1d] + (double)plVar12[0x1e];
      FUN_00d23310();
      plVar9 = local_68;
      local_d8._0_1_ = local_60[0];
      plVar12 = &local_d8;
      plVar13 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar13 = plVar12;
      }
      *(undefined1 *)plVar13 = 0;
      if ((local_60[0] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
      plVar13 = plVar9;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar13 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      local_38 = local_38 - (double)plVar13[0x1d];
      if (((char)local_d8 != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_a8 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      dVar22 = dVar22 * local_38;
      if (param_2 == 2) {
        for (; unaff_ESI != 0; unaff_ESI = unaff_ESI + 1) {
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d23310();
          plVar12 = local_68;
          local_d8._0_1_ = local_60[0];
          plVar10 = &local_d8;
          plVar14 = (longlong *)local_60;
          if (local_60[0] == '\0') {
            plVar14 = plVar10;
          }
          *(undefined1 *)plVar14 = 0;
          if ((local_60[0] != '\0') && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar15 = (pthread_key_t)plVar10;
          pvVar6 = _pthread_getspecific(pVar15);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            lVar7 = plVar12[0x19];
          }
          else {
            lVar7 = *(longlong *)(plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
          }
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar15);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific(pVar15);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar8 = FUN_01507970();
          local_38 = (double)FUN_016c98e0(uVar8,0);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (((char)local_d8 != '\0') && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific(pVar15);
          plVar10 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar10 = local_48, lVar7 != 0)) {
            plVar10 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          FUN_00d23340();
          unaff_R13 = local_68;
          local_d8._0_1_ = local_60[0];
          plVar12 = &local_d8;
          plVar14 = (longlong *)local_60;
          if (local_60[0] == '\0') {
            plVar14 = plVar12;
          }
          *(undefined1 *)plVar14 = 0;
          if ((local_60[0] != '\0') && (unaff_R13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            lVar7 = unaff_R13[0x19];
          }
          else {
            lVar7 = *(longlong *)(unaff_R13[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
          }
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = (longlong *)FUN_01508610();
          uVar8 = FUN_00e7b820();
          dVar23 = (double)FUN_016c98e0(uVar8,0);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (((char)local_d8 != '\0') && (unaff_R13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (dVar22 <= dVar23 - local_38) break;
        }
      }
      else {
        for (; unaff_ESI != 0; unaff_ESI = unaff_ESI + -1) {
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d23310();
          plVar12 = local_68;
          local_d8._0_1_ = local_60[0];
          plVar10 = &local_d8;
          plVar14 = (longlong *)local_60;
          if (local_60[0] == '\0') {
            plVar14 = plVar10;
          }
          *(undefined1 *)plVar14 = 0;
          if ((local_60[0] != '\0') && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar15 = (pthread_key_t)plVar10;
          pvVar6 = _pthread_getspecific(pVar15);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            lVar7 = plVar12[0x19];
          }
          else {
            lVar7 = *(longlong *)(plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
          }
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar15);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific(pVar15);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = (longlong *)FUN_01507970();
          uVar8 = FUN_00e7b820();
          local_38 = (double)FUN_016c98e0(uVar8,0);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (((char)local_d8 != '\0') && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific(pVar15);
          unaff_R13 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), unaff_R13 = local_48, lVar7 != 0))
          {
            unaff_R13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          FUN_00d23340();
          plVar14 = local_68;
          local_d8._0_1_ = local_60[0];
          plVar12 = &local_d8;
          plVar10 = (longlong *)local_60;
          if (local_60[0] == '\0') {
            plVar10 = plVar12;
          }
          *(undefined1 *)plVar10 = 0;
          if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            plVar10 = (longlong *)plVar14[0x19];
          }
          else {
            plVar10 = *(longlong **)(plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
          }
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar8 = FUN_01508610();
          dVar23 = (double)FUN_016c98e0(uVar8,0);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_d8 != '\0') && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (dVar22 <= dVar23 - local_38) break;
        }
      }
      lVar16 = lVar16 + 1;
      dVar1 = *(dword *)((longlong)local_108 + 0xc);
      uVar8 = local_80;
      plVar14 = local_70;
      plVar12 = local_98;
    } while (lVar16 < (int)dVar1);
  }
  local_40 = plVar14;
  local_90 = uVar8;
  local_98 = plVar12;
  if ((unaff_ESI != 0) && (0 < (int)dVar1)) {
    dVar22 = 0.0;
    do {
      plVar10 = *(longlong **)(*(longlong *)((longlong)local_108 + 0x10) + (longlong)dVar22 * 8);
      local_38 = dVar22;
      if (plVar12 == plVar10) {
        plVar10 = local_108;
        if ((!bVar2) && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b00();
          local_98 = plVar12;
          goto LAB_01283d30;
        }
        local_98 = plVar12;
        if (param_2 != 0) goto LAB_01283d47;
LAB_01284130:
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d23310();
        plVar12 = local_68;
        local_58[0] = local_60[0];
        plVar10 = (longlong *)local_58;
        plVar14 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = plVar10;
        }
        *(undefined1 *)plVar14 = 0;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar10);
        if ((pvVar6 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
          lVar16 = plVar12[0x19];
        }
        else {
          lVar16 = *(longlong *)(plVar12[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4] + 200);
          plVar10 = plVar12;
        }
        pVar15 = (pthread_key_t)plVar10;
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (longlong *)FUN_01507970();
        uVar8 = FUN_00e7b820();
        local_f8 = (double)FUN_016c98e0(uVar8,0);
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d23310();
        plVar14 = local_68;
        local_50[0] = local_60[0];
        plVar10 = (longlong *)local_50;
        plVar9 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar9 = plVar10;
        }
        *(undefined1 *)plVar9 = 0;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar15 = (pthread_key_t)plVar10;
        pvVar6 = _pthread_getspecific(pVar15);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar14[0x19];
        }
        else {
          lVar7 = *(longlong *)(plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01507970();
        local_e0 = (double)FUN_016c98e0(uVar8,0);
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar16 != 0) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01283d30:
        bVar2 = true;
        if (param_2 == 0) goto LAB_01284130;
LAB_01283d47:
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d23340();
        plVar12 = local_68;
        local_58[0] = local_60[0];
        plVar10 = (longlong *)local_58;
        plVar14 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = plVar10;
        }
        *(undefined1 *)plVar14 = 0;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar10);
        if ((pvVar6 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
          lVar16 = plVar12[0x19];
        }
        else {
          lVar16 = *(longlong *)(plVar12[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4] + 200);
          plVar10 = plVar12;
        }
        pVar15 = (pthread_key_t)plVar10;
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (longlong *)FUN_01508610();
        uVar8 = FUN_00e7b820();
        local_f8 = (double)FUN_016c98e0(uVar8,0);
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d23340();
        plVar14 = local_68;
        local_50[0] = local_60[0];
        plVar10 = (longlong *)local_50;
        plVar9 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar9 = plVar10;
        }
        *(undefined1 *)plVar9 = 0;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar15 = (pthread_key_t)plVar10;
        pvVar6 = _pthread_getspecific(pVar15);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar14[0x19];
        }
        else {
          lVar7 = *(longlong *)(plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar6 = _pthread_getspecific(pVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01508610();
        local_e0 = (double)FUN_016c98e0(uVar8,0);
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar16 != 0) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar12 = local_98;
      FUN_012850c0(local_f8 - local_e0,param_1,param_3,param_4,0);
      dVar22 = (double)((longlong)local_38 + 1);
    } while ((longlong)dVar22 < (longlong)*(int *)((longlong)local_108 + 0xc));
  }
  local_80 = local_90;
  local_70 = local_40;
LAB_01284557:
  plVar10 = (longlong *)((ulonglong)local_88 & 0xffffffff);
LAB_0128455e:
  uVar8 = local_80;
  plVar9 = local_70;
  plVar14 = plVar17;
joined_r0x0128461f:
  local_70 = plVar9;
  local_80 = uVar8;
  if (((char)local_b8 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)plVar10 != '\0') && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!(bool)uVar5 && local_108 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


