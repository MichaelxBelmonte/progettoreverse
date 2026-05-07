// Function: FUN_00266af0
// Address: 00266af0
// Size: 2660 bytes
// Class: MDEditorViewController


ulonglong FUN_00266af0(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined7 uVar14;
  ulonglong uVar12;
  longlong lVar13;
  byte unaff_SIL;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 uVar17;
  longlong *local_158;
  undefined1 local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  undefined4 local_b4;
  ulonglong local_b0;
  char local_a8;
  ulonglong local_a0;
  longlong local_98;
  char local_90;
  uint local_84;
  longlong local_80;
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  pVar9 = (pthread_key_t)param_1;
  if ((*(int *)(unaff_RDI + 0x198) == 1) || ((*(int *)(unaff_RDI + 0x198) == 2 && (unaff_SIL == 0)))
     ) {
    uVar12 = 0;
    goto LAB_00266f5c;
  }
  local_b4 = param_2;
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
LAB_00266ba0:
    plVar16 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar16 = local_40;
    pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
    plVar11 = &local_58;
    if (local_38[0] != '\0') {
      plVar11 = (longlong *)local_38;
    }
    local_58 = CONCAT71(local_58._1_7_,local_38[0]);
    *(char *)plVar11 = '\0';
    if ((local_38[0] != '\0') && (plVar16 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (longlong *)0x0) {
      plVar16 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar16 == (longlong *)0x0) goto LAB_00266ba0;
    }
    else if ((char)local_58 != '\0') goto LAB_00266ba3;
    FUN_00d50b00();
  }
LAB_00266ba3:
  local_48 = plVar16;
  cVar3 = FUN_002664b0();
  if (((cVar3 == '\0') && (cVar3 = FUN_002639e0(), cVar3 == '\0')) &&
     (cVar3 = FUN_00262e30(), cVar3 == '\0')) {
    uVar12 = 0;
    if (local_48 == (longlong *)0x0) goto LAB_00266f5c;
  }
  else {
    uVar17 = (**(code **)(*local_48 + 0xe20))();
    plVar16 = local_40;
    uVar4 = (uint)unaff_SIL;
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_00266cb0;
      uVar17 = FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
LAB_00266c5d:
      if (*(int *)((longlong)plVar16 + 0xc) == 0) {
        bVar1 = false;
        goto LAB_00266cb8;
      }
      local_108 = 0;
      local_100 = '\0';
      FUN_019c1990(uVar17,&local_108);
      plVar15 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
        local_70 = 0;
      }
      else if (local_38[0] == '\0') {
        uVar5 = FUN_00d50b00();
        local_70 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
        local_70 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (longlong *)0x0) {
        local_60 = plVar16;
        local_84 = uVar4;
        if (*(int *)((longlong)plVar15 + 0xc) != 0) goto LAB_00266eab;
        goto LAB_00266f2e;
      }
LAB_00266f2b:
      plVar15 = (longlong *)0x0;
      local_60 = plVar16;
LAB_00266f2e:
      uVar12 = 0;
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_00266c5d;
LAB_00266cb0:
      bVar1 = true;
LAB_00266cb8:
      (**(code **)(*local_48 + 0x9b0))(uVar17,0);
      plVar11 = local_40;
      local_84 = uVar4;
      if (plVar16 == local_40) {
LAB_00266d3c:
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar16 = plVar11;
        if (local_38[0] == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (!bVar1) {
            FUN_00d50b20();
          }
          goto LAB_00266d3c;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      local_130 = '\0';
      local_128 = 0;
      local_120 = '\0';
      local_118 = 0;
      local_110 = '\0';
      plVar10 = &local_118;
      local_138 = plVar16;
      FUN_01293ed0(plVar10,&local_128);
      plVar15 = local_40;
      pVar9 = (pthread_key_t)plVar10;
      if (local_40 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
        uVar5 = 0;
      }
      else {
        uVar14 = (undefined7)((ulonglong)plVar11 >> 8);
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          uVar5 = CONCAT71(uVar14,1);
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
          uVar5 = CONCAT71(uVar14,1);
        }
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = uVar5;
      if (plVar15 == (longlong *)0x0) goto LAB_00266f2b;
      local_60 = plVar16;
      if ((*(int *)((longlong)plVar15 + 0xc) != 1) || (*(int *)((longlong)plVar15 + 0xc) == 0))
      goto LAB_00266f2e;
LAB_00266eab:
      local_f0 = '\0';
      local_f8 = plVar16;
      cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                          *local_48 + 8))();
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = plVar16;
      if (cVar3 == '\0') goto LAB_00266f2e;
      if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
        local_38[0] = '\0';
        local_40 = (longlong *)0x0;
LAB_00266f7c:
        uVar12 = 0;
      }
      else {
        FUN_006f3f00();
        if (local_40 == (longlong *)0x0) goto LAB_00266f7c;
        if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
          local_50 = '\0';
          local_58 = 0;
        }
        else {
          FUN_006f3f00();
        }
        uVar4 = FUN_00751ba0();
        uVar12 = (ulonglong)uVar4;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar12 == '\0') {
        (**(code **)(*local_48 + 0x9f8))();
        local_68 = local_40;
        if (local_40 == (longlong *)0x0) {
          local_a0 = 0;
          local_68 = (longlong *)0x0;
        }
        else {
          local_a0 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
          if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01f27fe0();
        (**(code **)(*local_40 + 0x450))();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_006f3f00();
        (**(code **)(*local_148 + 0x628))();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a11a0();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713990();
        lVar13 = local_58;
        pvVar6 = _pthread_getspecific(pVar9);
        lVar2 = local_58;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar13 = lVar2, lVar7 != 0)) {
          lVar13 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        FUN_01313ad0();
        local_68 = local_40;
        if (local_40 == (longlong *)0x0) {
          uVar12 = 0;
          local_68 = (longlong *)0x0;
        }
        else {
          uVar14 = (undefined7)((ulonglong)lVar13 >> 8);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
            uVar12 = CONCAT71(uVar14,1);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            uVar12 = CONCAT71(uVar14,1);
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (CONCAT71(local_98._1_7_,(char)local_98) != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        local_a0 = uVar12;
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != (longlong *)0x0) && ((char)local_b4 != '\0')) {
        (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
        plVar16 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
          FUN_0194ed20();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(longlong *)(unaff_RDI + 0x80) == 0) {
          puVar8 = (undefined8 *)FUN_00e8fc40();
          FUN_000161a0();
          *puVar8 = &DAT_02500938;
          puVar8[0xe] = 0;
          puVar8[0xf] = 0;
          *(undefined2 *)(puVar8 + 0x10) = 0;
          puVar8[0x11] = 0;
          *(undefined8 *)((longlong)puVar8 + 0x8f) = 0;
          puVar8[0x13] = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
          puVar8[0x18] = 0;
          (*DAT_02500950)();
          lVar13 = *(longlong *)(unaff_RDI + 0x80);
          *(undefined8 **)(unaff_RDI + 0x80) = puVar8;
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
        }
        local_d8 = local_68;
        local_d0 = '\0';
        FUN_00511970();
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_005119c0();
        FUN_00511a40();
        local_c8 = local_48;
        local_c0 = '\0';
        FUN_00511920();
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00511a30();
        uVar17 = FUN_00d23310();
        plVar16 = local_40;
        plVar11 = &local_98;
        if (local_38[0] != '\0') {
          plVar11 = (longlong *)local_38;
        }
        local_98._0_1_ = local_38[0];
        *(char *)plVar11 = '\0';
        if ((local_38[0] != '\0') && (plVar16 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((char)local_98 == '\0') {
          if (plVar16 != (longlong *)0x0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          local_98._0_1_ = '\0';
        }
        local_150 = 1;
        local_158 = plVar16;
        FUN_00267bd0(uVar17,&local_158);
        local_80 = local_58;
        local_78 = 0;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_78 = '\x01';
        FUN_005119d0();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (plVar16 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        uVar12 = *(ulonglong *)(unaff_RDI + 0x80);
        local_a8 = 0;
        if (uVar12 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        local_b0 = uVar12;
        FUN_01d83990();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar12 = CONCAT71((int7)(uVar12 >> 8),local_68 != (longlong *)0x0);
      if (((char)local_a0 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (plVar15 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00266f5c:
  return uVar12 & 0xffffffff;
}


