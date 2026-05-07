// Function: FUN_01720550
// Address: 01720550
// Size: 1493 bytes
// Class: Unknown
// String references:
//   "%@%@%I"
//   "%@%I"


void FUN_01720550(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined1 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  longlong local_80;
  char local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  char local_68;
  int local_60;
  int local_54;
  longlong local_40;
  char local_38;
  
  local_d0 = param_1;
  local_98 = param_2;
  if (*param_2 != 0) goto LAB_0172063a;
  FUN_00d8ede0();
  puVar4 = local_90;
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == local_90) {
    if (((char)param_2[1] != '\0') || (local_90 == (undefined8 *)0x0)) goto LAB_0172061b;
    if ((char)local_88 == '\0') {
      FUN_00d50b00();
      goto LAB_01720618;
    }
  }
  else {
    lVar12 = param_2[1];
    if ((char)local_88 == '\0') {
      if (local_90 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *local_98 = (longlong)puVar4;
      if (((char)lVar12 != '\0') && (puVar1 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01720618:
      *(undefined1 *)(param_2 + 1) = 1;
LAB_0172061b:
      if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0172063a;
    }
    *param_2 = (longlong)local_90;
    if (((char)lVar12 != '\0') && (puVar1 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(param_2 + 1) = 1;
LAB_0172063a:
  lVar12 = 0;
  local_54 = 0;
  local_c8 = param_3;
  do {
    lVar9 = DAT_02781710;
    iVar2 = (int)lVar12;
    uVar11 = (uint)(*(ulonglong *)(*local_d0 + 0x18) >> ((char)lVar12 * '\x04' & 0x3fU)) & 0xf;
    if (uVar11 == 0xf) {
      uVar11 = 0xffffffff;
    }
    if (uVar11 != 0xffffffff) {
      if (uVar11 == 6) {
        if (iVar2 == 0xb) {
          FUN_01720d50();
          puVar1 = local_90;
          if (((char)local_88 == '\0') && (local_90 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          FUN_0171f810();
          if (puVar1 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        else if (iVar2 == 9) {
          if (DAT_02781710 != 0) {
            FUN_00d50b00();
          }
          FUN_0171f810();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          goto LAB_01720650;
        }
        lVar9 = *local_98;
        local_88 = 2;
        local_90 = &DAT_024c5048;
        local_78 = 0;
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\x01';
        local_90 = (undefined8 *)&DAT_025df2a0;
        local_70 = 7;
        local_80 = lVar9;
        FUN_00d8cb40();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_b8 = 1;
        FUN_0171f810();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_90 = &DAT_024c5048;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        iVar5 = FUN_013ff610();
        lVar9 = DAT_027cd570;
        if ((iVar5 < lVar12) || (lVar9 = DAT_02781610, lVar12 < iVar5)) {
          if (lVar9 == 0) {
            local_a0 = (ulonglong)(uint7)(int7)(int3)((uint)iVar5 >> 8) << 8;
          }
          else {
            uVar7 = FUN_00d50b00();
            local_a0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),lVar9 != 0);
            if (lVar9 != 0) {
              iVar6 = FUN_00d8c7a0();
              iVar8 = iVar2 - iVar5;
              iVar10 = -iVar8;
              if (0 < iVar8) {
                iVar10 = iVar8;
              }
              if (iVar6 < iVar10) {
                iVar10 = iVar5 + local_54;
                if (iVar5 + local_54 <= iVar2 - iVar5) {
                  iVar10 = iVar2 - iVar5;
                }
                iVar10 = iVar10 - iVar6;
                do {
                  FUN_0171f810();
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              bVar3 = false;
              goto LAB_01720940;
            }
          }
          bVar3 = true;
          lVar9 = 0;
        }
        else {
          bVar3 = true;
          lVar9 = 0;
          local_a0 = 0;
        }
LAB_01720940:
        local_d8 = lVar9;
        FUN_00083ea0(3,&local_d8);
        local_60 = uVar11 + 1;
        local_90 = (undefined8 *)&DAT_0256f0f0;
        FUN_00d8cb40(&DAT_0256f0f0,&local_90);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_a8 = 1;
        FUN_0171f810();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_90 = (undefined8 *)&DAT_0253d630;
        if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
          FUN_00d50b20();
        }
        local_90 = &DAT_024c5048;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar3 && (char)local_a0 == '\x01') {
          FUN_00d50b20();
        }
      }
LAB_01720650:
      FUN_01715d40();
    }
    lVar12 = lVar12 + 1;
    local_54 = local_54 + -1;
    if (lVar12 == 0xc) {
      return;
    }
  } while( true );
}


