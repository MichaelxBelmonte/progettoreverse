// Function: FUN_01b95ae0
// Address: 01b95ae0
// Size: 2480 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01b962f1) */
/* WARNING: Removing unreachable block (ram,0x01b962fd) */

undefined8 * FUN_01b95ae0(undefined8 param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined7 uVar11;
  int iVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 *local_148;
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  undefined8 *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined4 local_b0;
  int local_ac;
  longlong *local_a8;
  longlong local_90;
  char local_88;
  longlong *local_78;
  longlong *local_68;
  char local_60 [8];
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  char local_38 [8];
  
  local_110 = param_1;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  pVar6 = (pthread_key_t)param_1;
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  local_b0 = (undefined4)param_3;
  if (unaff_RSI[0x3f] == 0) {
LAB_01b95c19:
    uVar9 = 0;
    local_78 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = unaff_RSI[0x3f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_60[0] == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_68 == (longlong *)0x0) goto LAB_01b95c19;
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_78 = local_68;
    plVar7 = local_68;
    if (local_68 == (longlong *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = CONCAT71((uint7)((ulonglong)param_3 >> 8) & 0xffffff,1);
      if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar6 = (pthread_key_t)plVar7;
    FUN_00d50b20();
  }
  local_118 = uVar9;
  (**(code **)(*unaff_RSI + 0x988))();
  if (local_60[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b95cfc;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_01b95cfc:
    local_a8 = local_68;
    local_ac = *(int *)((longlong)local_68 + 0xc);
    if (local_ac == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*pcVar2)();
      uVar11 = (undefined7)((ulonglong)local_68 >> 8);
      plVar7 = local_68;
      if (param_2 >> 0x20 == 0) {
        FUN_01b920e0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = 0;
        FUN_01252670(0,0,0,0);
        pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar9 >> 8),local_60[0]);
        pcVar10 = local_38;
        if (local_60[0] != '\0') {
          pcVar10 = local_60;
        }
        local_38[0] = local_60[0];
        *pcVar10 = '\0';
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71(uVar11,1);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01b920e0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = param_2;
        FUN_012521f0(param_2,0,0,0);
        pVar6 = (pthread_key_t)CONCAT71((int7)(uVar8 >> 8),local_60[0]);
        pcVar10 = local_38;
        if (local_60[0] != '\0') {
          pcVar10 = local_60;
        }
        local_38[0] = local_60[0];
        *pcVar10 = '\0';
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71(uVar11,1);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      local_108 = uVar9;
      FUN_01787610();
      if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_100 = local_a8;
      local_f8 = '\0';
      (**(code **)(*local_68 + 0x370))();
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01787560();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017874b0();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = local_68;
      if (param_4 == '\0') {
        local_d0 = local_78;
        local_c8 = '\0';
        local_b8 = '\0';
        local_c0 = puVar5;
        (**(code **)(*local_68 + 0x378))(param_2,&local_d0,local_110,&local_c0);
        if (local_68 == (longlong *)0x0) {
          bVar14 = false;
          plVar13 = (longlong *)0x0;
        }
        else if (local_60[0] == '\0') {
          FUN_00d50b00();
          bVar14 = true;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          bVar14 = true;
        }
        if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_f0 = local_78;
        local_e8 = '\0';
        local_d8 = '\0';
        local_e0 = puVar5;
        (**(code **)(*local_68 + 0x378))(param_2,&local_f0,local_110,&local_e0);
        if (local_68 == (longlong *)0x0) {
          bVar14 = false;
          plVar13 = (longlong *)0x0;
        }
        else if (local_60[0] == '\0') {
          FUN_00d50b00();
          bVar14 = true;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          bVar14 = true;
        }
        if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_60[0] = '\0';
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = puVar5;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar12 = -local_50._4_4_;
          }
          else {
            iVar12 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar12);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar12 = 0;
          }
          local_50 = CONCAT44(iVar12,(int)local_50);
        }
        iVar12 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar12);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar12) break;
        FUN_00d21140();
      }
      FUN_0176e420();
      if (plVar13 != (longlong *)0x0) {
        local_140 = 0;
        local_148 = puVar3;
        iVar12 = FUN_01b9a7b0(param_2,&local_148);
        if (iVar12 == -1) {
          local_60[0] = '\0';
          FUN_00d23370(extraout_XMM0_Da,0);
          if ((local_60[0] != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((plVar7 != (longlong *)0x0) && ((char)local_b0 != '\0')) {
        local_130 = 0;
        local_120 = 0;
        local_138 = plVar7;
        local_128 = puVar3;
        iVar12 = FUN_01b9a7b0(param_2,&local_128);
        if (iVar12 == -1) {
          local_60[0] = '\0';
          FUN_00d23370(extraout_XMM0_Da_00,0);
          if ((local_60[0] != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      *unaff_RDI = puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((bVar14) && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_108 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    bVar14 = local_ac != 0;
    FUN_00d50b20();
    goto LAB_01b9645b;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  bVar14 = false;
LAB_01b9645b:
  if (((char)local_118 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar14 && puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


