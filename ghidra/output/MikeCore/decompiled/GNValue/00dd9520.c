// Function: FUN_00dd9520
// Address: 00dd9520
// Size: 4345 bytes
// Class: GNValue
// String references:
//   "multipart/form-data; boundary=%@"
//   "\r\n--%@\r\n"
//   "Content-Disposition: form-data; name=\"%@\"\r\n\r\n"
//   "Content-Disposition: form-data; name=\"%@\"; filename=\"%@\"\r\n"
//   "\r\n--%@--\r\n"
//   "uploading: %@"


void FUN_00dd9520(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong *unaff_RDI;
  undefined8 *puVar9;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  undefined8 *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined8 *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 *local_88;
  longlong *local_80;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40;
  
  if ((longlong *)unaff_RDI[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x18))();
    plVar3 = local_80;
    if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x18))();
      local_110 = (longlong)local_80;
      local_108 = 0;
      local_198 = DAT_02784490;
      if ((char)local_78[0] == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
          local_198 = DAT_02784490;
        }
      }
      else {
        local_78[0] = local_78[0] & 0xffffff00;
      }
      local_108 = '\x01';
      DAT_02784490 = local_198;
      if (local_198 != 0) {
        local_108 = '\x01';
        FUN_00d50b00();
      }
      local_190 = '\x01';
      FUN_00de8b00();
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = DAT_02784498;
  if (DAT_02784498 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar6;
  local_180 = '\x01';
  FUN_00e94b30();
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  local_130 = 0;
  lVar6 = unaff_RDI[2];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_130 = '\x01';
  local_138 = lVar6;
  FUN_00db9a70();
  FUN_00dbb440();
  local_100 = (longlong)local_80;
  local_f8 = 0;
  local_178 = DAT_027844a0;
  if ((char)local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
      local_178 = DAT_027844a0;
    }
  }
  else {
    local_78[0] = local_78[0] & 0xffffff00;
  }
  local_f8 = '\x01';
  DAT_027844a0 = local_178;
  if (local_178 != 0) {
    local_f8 = '\x01';
    FUN_00d50b00();
  }
  local_170 = '\x01';
  (**(code **)(*unaff_RDI + 0x3a8))();
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = DAT_02784118;
  if (DAT_02784118 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_78[0] = 1;
  local_80 = &DAT_024c5048;
  local_68 = local_68 & 0xffffffffffffff00;
  local_88 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_70 = puVar9;
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_00d8cb40();
  puVar4 = local_b0;
  if ((char)local_a8[0] == '\0') {
    if (local_b0 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8[0] = local_a8[0] & 0xffffff00;
  }
  local_80 = &DAT_024c5048;
  if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027844b8;
  local_50 = puVar4;
  local_168 = puVar4;
  local_160 = '\0';
  if (DAT_027844b8 != 0) {
    FUN_00d50b00();
  }
  local_158 = lVar6;
  local_150 = '\x01';
  (**(code **)(*unaff_RDI + 0x3a8))();
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  lVar6 = unaff_RDI[0x13];
  unaff_RDI[0x13] = (longlong)puVar4;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar3 = local_80;
  local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)local_78[0]);
  ppuVar5 = (undefined8 **)local_78;
  if ((char)local_78[0] == '\0') {
    ppuVar5 = &local_b0;
  }
  *(undefined1 *)ppuVar5 = 0;
  if (((char)local_78[0] != '\0') && (plVar3 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  iVar7 = *(int *)((longlong)plVar3 + 0xc);
  if ((char)local_b0 != '\0') {
    FUN_00d50b20();
  }
  if (iVar7 != 0) {
    FUN_00c9fe20();
    plVar3 = local_80;
    ppuVar5 = (undefined8 **)local_78;
    if ((char)local_78[0] == '\0') {
      ppuVar5 = &local_b0;
    }
    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)local_78[0]);
    *(undefined1 *)ppuVar5 = 0;
    if (((char)local_78[0] != '\0') && (plVar3 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_b0 == '\0') {
      if (plVar3 == (undefined8 *)0x0) goto LAB_00dd9ed0;
      FUN_00d50b00();
    }
    else if (plVar3 == (undefined8 *)0x0) goto LAB_00dd9ed0;
    local_78[0] = local_78[0] & 0xffffff00;
    local_80 = (undefined8 *)0x0;
    local_1a0 = plVar3;
    local_70 = plVar3;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar7 = -local_68._4_4_;
        }
        else {
          iVar7 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar7);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar7 = 0;
        }
        local_68 = CONCAT44(iVar7,(int)local_68);
      }
      puVar9 = local_88;
      lVar6 = (longlong)(int)local_68;
      iVar7 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar7);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar7) break;
      local_148 = *(undefined8 **)(local_70[2] + 8 + lVar6 * 8);
      local_140 = '\0';
      local_80 = local_148;
      FUN_000175c0(unaff_RDI,&local_148);
      local_f0 = local_48;
      local_e8 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_e8 = '\x01';
      FUN_00d97750();
      puVar9 = local_b0;
      if ((char)local_a8[0] == '\0') {
        if (local_b0 != (undefined8 *)0x0) {
          FUN_00d50b00();
          if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8[0] = local_a8[0] & 0xffffff00;
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = local_88;
      if (puVar9 != (undefined8 *)0x0) {
        local_1a8 = puVar9;
        local_a8[0] = 1;
        local_b0 = &DAT_024c5048;
        local_98 = local_98 & 0xffffffffffffff00;
        if (local_88 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_a0 = puVar4;
        local_98 = CONCAT71(local_98._1_7_,1);
        FUN_00d8cb40();
        FUN_00d8cbf0();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00c92190();
        FUN_00d50b20();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        local_b0 = &DAT_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = local_80;
        local_a8[0] = 1;
        local_b0 = &DAT_024c5048;
        local_98 = local_98 & 0xffffffffffffff00;
        if (local_80 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_a0 = plVar3;
        local_98 = CONCAT71(local_98._1_7_,1);
        FUN_00d8cb40();
        FUN_00d8cbf0();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00c92190();
        FUN_00d50b20();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        local_b0 = &DAT_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8cbf0();
        if ((char)local_a8[0] == '\0') {
          if (local_b0 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8[0] = local_a8[0] & 0xffffff00;
        }
        FUN_00c92190();
        FUN_00d50b20();
        if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_00dd9ed0:
  if ((undefined8 *)unaff_RDI[0x19] != (undefined8 *)0x0) {
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_b0 = (undefined8 *)0x0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_a0 = (undefined8 *)unaff_RDI[0x19];
    while( true ) {
      puVar9 = local_88;
      lVar6 = (longlong)(int)local_98;
      iVar7 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar7);
      if (*(int *)((longlong)local_a0 + 0xc) <= iVar7) break;
      local_b0 = *(undefined8 **)(local_a0[2] + 8 + lVar6 * 8);
      local_78[0] = 1;
      local_80 = &DAT_024c5048;
      local_68 = local_68 & 0xffffffffffffff00;
      if (local_88 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar9;
      local_68 = CONCAT71(local_68._1_7_,1);
      FUN_00d8cb40();
      FUN_00d8cbf0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00c92190();
      FUN_00d50b20();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      lVar6 = local_b0[3];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      lVar1 = local_b0[4];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar1;
      local_118 = lVar6;
      FUN_00083ea0(2,&local_1b0);
      FUN_00d8cb40();
      FUN_00d8cbf0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00c92190();
      FUN_00d50b20();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      local_80 = (longlong *)&DAT_0253d630;
      if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar6 = DAT_02784120;
      if (DAT_02784120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cbf0();
      if ((char)local_78[0] == '\0') {
        if (local_80 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78[0] = local_78[0] & 0xffffff00;
      }
      FUN_00c92190();
      FUN_00d50b20();
      if (((char)local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (local_b0[2] != 0) {
        FUN_00d50b00();
      }
      FUN_00c92190();
      FUN_00d50b20();
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar7 = -local_98._4_4_;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar7 = 0;
        }
        local_98 = CONCAT44(iVar7,(int)local_98);
      }
    }
    FUN_00ddb4f0();
    puVar9 = local_88;
  }
  local_78[0] = 1;
  local_80 = &DAT_024c5048;
  local_68 = local_68 & 0xffffffffffffff00;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  local_70 = puVar9;
  FUN_00d8cb40();
  FUN_00d8cbf0();
  local_e0 = local_b0;
  local_d8 = 0;
  if ((char)local_a8[0] == '\0') {
    if (local_b0 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8[0] = local_a8[0] & 0xffffff00;
  }
  local_d8 = '\x01';
  FUN_00c8e5b0();
  if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  unaff_RDI[0x1a] = (longlong)*(int *)(unaff_RDI[0x13] + 0x18);
  FUN_00dd9100();
  FUN_00e922a0();
  puVar4 = local_50;
  if (local_80 != (longlong *)0x0) {
    iVar7 = *(int *)(unaff_RDI[0x19] + 0xc);
    if ((char)local_78[0] != '\0') {
      (**(code **)(*local_80 + 0x10))();
      FUN_00d50b20();
    }
    puVar4 = local_50;
    if (iVar7 != 0) {
      FUN_00e922a0();
      plVar3 = local_48;
      local_120 = 0;
      FUN_00d50b00();
      local_120 = '\x01';
      local_128 = unaff_RDI;
      FUN_00d23310();
      puVar4 = local_b0;
      puVar8 = (uint *)&local_118;
      if ((char)local_a8[0] != '\0') {
        puVar8 = local_a8;
      }
      local_118 = CONCAT71(local_118._1_7_,(char)local_a8[0]);
      *(undefined1 *)puVar8 = 0;
      if (((char)local_a8[0] != '\0') && (puVar4 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar2 = (undefined8 *)puVar4[4];
      if (puVar2 == (undefined8 *)0x0) {
        local_78[0] = 1;
        local_80 = &DAT_024c5048;
        local_68 = local_68 & 0xffffffffffffff00;
      }
      else {
        FUN_00d50b00();
        local_78[0] = 1;
        local_80 = &DAT_024c5048;
        local_68 = local_68 & 0xffffffffffffff00;
        FUN_00d50b00();
      }
      local_68 = CONCAT71(local_68._1_7_,1);
      local_70 = puVar2;
      FUN_00d8cb40();
      local_d0 = local_c0;
      local_c8 = 0;
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      puVar4 = local_50;
      local_c8 = '\x01';
      (**(code **)(*plVar3 + 0x20))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_118 != '\0') {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


