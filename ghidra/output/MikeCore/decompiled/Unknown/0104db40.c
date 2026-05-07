// Function: FUN_0104db40
// Address: 0104db40
// Size: 839 bytes
// Class: Unknown


undefined1 * FUN_0104db40(ulonglong *param_1,longlong param_2,ulonglong param_3,code *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong *unaff_RSI;
  undefined8 *puVar9;
  ulonglong uVar10;
  dword *pdVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 local_48;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar6 = (undefined1 *)0x0;
  if ((param_3 - 0x18 < 0x7ffffff1) && ((param_3 & 7) == 0)) {
    puVar6 = (undefined1 *)(param_3 - 8);
    local_48 = *param_1;
    _memmove(param_1 + 1,puVar6,(size_t)param_3);
    if (puVar6 != (undefined1 *)0x0) {
      puVar9 = (undefined8 *)(param_2 + param_3 + -0x10);
      uVar13 = local_48 >> 0x38;
      uVar10 = ((ulonglong)puVar6 >> 2 & 0xfffffffffffffffe) * 3;
      pdVar11 = &MACH_HEADER.cpusubtype;
      puVar8 = puVar9;
      while( true ) {
        uVar1 = local_48;
        bVar5 = (byte)uVar10 ^ (byte)uVar13;
        local_48 = CONCAT17(bVar5,(undefined7)local_48);
        if (0xff < uVar10) {
          local_48._6_1_ = SUB81(uVar1,6);
          local_48._5_1_ = SUB81(uVar1,5);
          local_48._4_1_ = SUB81(uVar1,4);
          local_48._0_4_ = (undefined4)uVar1;
          local_48._0_5_ = CONCAT14(local_48._4_1_ ^ (byte)(uVar10 >> 0x18),(undefined4)local_48);
          local_48 = CONCAT35(CONCAT21(CONCAT11(bVar5,local_48._6_1_ ^ (byte)(uVar10 >> 8)),
                                       local_48._5_1_ ^ (byte)(uVar10 >> 0x10)),(undefined5)local_48
                             );
        }
        uVar3 = *puVar8;
        (*param_4)();
        *puVar8 = uVar3;
        if (puVar6 <= pdVar11) break;
        puVar8 = puVar8 + -1;
        uVar13 = local_48 >> 0x38;
        uVar10 = uVar10 - 1;
        pdVar11 = pdVar11 + 2;
      }
      uVar10 = uVar10 - 1;
      puVar12 = (undefined1 *)0x0;
      puVar8 = puVar9;
      do {
        uVar13 = local_48;
        bVar5 = local_48._7_1_ ^ (byte)uVar10;
        local_48 = CONCAT17(bVar5,(undefined7)local_48);
        if (0xff < uVar10) {
          local_48._6_1_ = SUB81(uVar13,6);
          local_48._5_1_ = SUB81(uVar13,5);
          local_48._4_1_ = SUB81(uVar13,4);
          local_48._0_4_ = (undefined4)uVar13;
          local_48._0_5_ = CONCAT14(local_48._4_1_ ^ (byte)(uVar10 >> 0x18),(undefined4)local_48);
          local_48 = CONCAT35(CONCAT21(CONCAT11(bVar5,local_48._6_1_ ^ (byte)(uVar10 >> 8)),
                                       local_48._5_1_ ^ (byte)(uVar10 >> 0x10)),(undefined5)local_48
                             );
        }
        uVar3 = *puVar8;
        (*param_4)();
        *puVar8 = uVar3;
        puVar12 = puVar12 + 8;
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + -1;
      } while (puVar12 < puVar6);
      lVar7 = 0;
      uVar13 = uVar10 & 0xffffffff;
      puVar12 = (undefined1 *)0x0;
      do {
        uVar4 = local_48;
        uVar1 = lVar7 + uVar10;
        bVar5 = local_48._7_1_ ^ (byte)uVar13;
        local_48 = CONCAT17(bVar5,(undefined7)local_48);
        if (0xff < uVar1) {
          local_48._6_1_ = SUB81(uVar4,6);
          local_48._5_1_ = SUB81(uVar4,5);
          local_48._4_1_ = SUB81(uVar4,4);
          local_48._0_4_ = (undefined4)uVar4;
          local_48._0_5_ = CONCAT14(local_48._4_1_ ^ (byte)(uVar1 >> 0x18),(undefined4)local_48);
          local_48 = CONCAT35(CONCAT21(CONCAT11(bVar5,local_48._6_1_ ^ (byte)(uVar1 >> 8)),
                                       local_48._5_1_ ^ (byte)(uVar1 >> 0x10)),(undefined5)local_48)
          ;
        }
        uVar3 = puVar9[lVar7];
        (*param_4)();
        puVar9[lVar7] = uVar3;
        puVar12 = puVar12 + 8;
        lVar7 = lVar7 + -1;
        uVar13 = (ulonglong)(byte)((byte)uVar13 - 1);
      } while (puVar12 < puVar6);
      uVar10 = uVar10 + lVar7;
      puVar12 = (undefined1 *)0x0;
      puVar8 = puVar9;
      do {
        uVar13 = local_48;
        bVar5 = local_48._7_1_ ^ (byte)uVar10;
        local_48 = CONCAT17(bVar5,(undefined7)local_48);
        if (0xff < uVar10) {
          local_48._6_1_ = SUB81(uVar13,6);
          local_48._5_1_ = SUB81(uVar13,5);
          local_48._4_1_ = SUB81(uVar13,4);
          local_48._0_4_ = (undefined4)uVar13;
          local_48._0_5_ = CONCAT14(local_48._4_1_ ^ (byte)(uVar10 >> 0x18),(undefined4)local_48);
          local_48 = CONCAT35(CONCAT21(CONCAT11(bVar5,local_48._6_1_ ^ (byte)(uVar10 >> 8)),
                                       local_48._5_1_ ^ (byte)(uVar10 >> 0x10)),(undefined5)local_48
                             );
        }
        uVar3 = *puVar8;
        (*param_4)();
        *puVar8 = uVar3;
        puVar12 = puVar12 + 8;
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + -1;
      } while (puVar12 < puVar6);
      puVar12 = (undefined1 *)0x0;
      puVar8 = puVar9;
      do {
        uVar13 = local_48;
        bVar5 = local_48._7_1_ ^ (byte)uVar10;
        local_48 = CONCAT17(bVar5,(undefined7)local_48);
        if (0xff < uVar10) {
          local_48._6_1_ = SUB81(uVar13,6);
          local_48._5_1_ = SUB81(uVar13,5);
          local_48._4_1_ = SUB81(uVar13,4);
          local_48._0_4_ = (undefined4)uVar13;
          local_48._0_5_ = CONCAT14(local_48._4_1_ ^ (byte)(uVar10 >> 0x18),(undefined4)local_48);
          local_48 = CONCAT35(CONCAT21(CONCAT11(bVar5,local_48._6_1_ ^ (byte)(uVar10 >> 8)),
                                       local_48._5_1_ ^ (byte)(uVar10 >> 0x10)),(undefined5)local_48
                             );
        }
        uVar3 = *puVar8;
        (*param_4)();
        *puVar8 = uVar3;
        puVar12 = puVar12 + 8;
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + -1;
      } while (puVar12 < puVar6);
      puVar12 = (undefined1 *)0x0;
      do {
        uVar13 = local_48;
        bVar5 = local_48._7_1_ ^ (byte)uVar10;
        local_48 = CONCAT17(bVar5,(undefined7)local_48);
        if (0xff < uVar10) {
          local_48._6_1_ = SUB81(uVar13,6);
          local_48._5_1_ = SUB81(uVar13,5);
          local_48._4_1_ = SUB81(uVar13,4);
          local_48._0_4_ = (undefined4)uVar13;
          local_48._0_5_ = CONCAT14(local_48._4_1_ ^ (byte)(uVar10 >> 0x18),(undefined4)local_48);
          local_48 = CONCAT35(CONCAT21(CONCAT11(bVar5,local_48._6_1_ ^ (byte)(uVar10 >> 8)),
                                       local_48._5_1_ ^ (byte)(uVar10 >> 0x10)),(undefined5)local_48
                             );
        }
        uVar3 = *puVar9;
        (*param_4)();
        *puVar9 = uVar3;
        puVar12 = puVar12 + 8;
        uVar10 = uVar10 - 1;
        puVar9 = puVar9 + -1;
      } while (puVar12 < puVar6);
    }
    *unaff_RSI = local_48;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


