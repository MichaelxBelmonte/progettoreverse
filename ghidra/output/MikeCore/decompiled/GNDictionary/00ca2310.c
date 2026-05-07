// Function: FUN_00ca2310
// Address: 00ca2310
// Size: 918 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x00ca2671) */
/* WARNING: Removing unreachable block (ram,0x00ca267a) */

longlong * FUN_00ca2310(void)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_40;
  
  lVar8 = FUN_00d8d520();
  iVar6 = FUN_00d8c7a0();
  if ((*unaff_RSI == 0) || (iVar7 = FUN_00d8c7a0(), iVar7 == 0)) {
    FUN_00d8ede0();
  }
  else {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92120();
    puVar15 = (undefined8 *)puVar9[2];
    if (0 < iVar6) {
      lVar14 = 0;
      puVar10 = (undefined8 *)0x0;
      local_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_68 = (undefined8 *)0x0;
      local_60 = (undefined8 *)0x0;
      local_40 = puVar15;
      iVar7 = iVar6;
      do {
        lVar5 = DAT_02773318;
        lVar4 = DAT_02773310;
        lVar3 = DAT_02773308;
        lVar2 = DAT_02773300;
        lVar13 = DAT_027732f8;
        uVar1 = *(undefined2 *)(lVar8 + lVar14 * 2);
        switch(uVar1) {
        case 0x22:
          if (local_78 == (undefined8 *)0x0) {
            if (DAT_02773310 != 0) {
              FUN_00d50b00();
            }
            local_78 = (undefined8 *)FUN_00d8d520();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(local_78 + 1);
          uVar12 = *local_78;
          goto LAB_00ca25a9;
        default:
          *(undefined2 *)puVar15 = uVar1;
          puVar15 = (undefined8 *)((longlong)puVar15 + 2);
          break;
        case 0x26:
          if (local_60 == (undefined8 *)0x0) {
            if (DAT_027732f8 != 0) {
              FUN_00d50b00();
            }
            local_60 = (undefined8 *)FUN_00d8d520();
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          *(undefined2 *)(puVar15 + 1) = *(undefined2 *)(local_60 + 1);
          *puVar15 = *local_60;
          puVar15 = (undefined8 *)((longlong)puVar15 + 10);
          break;
        case 0x27:
          if (puVar10 == (undefined8 *)0x0) {
            if (DAT_02773318 != 0) {
              FUN_00d50b00();
            }
            puVar10 = (undefined8 *)FUN_00d8d520();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar10 + 1);
          uVar12 = *puVar10;
LAB_00ca25a9:
          *puVar15 = uVar12;
          puVar15 = (undefined8 *)((longlong)puVar15 + 0xc);
          break;
        case 0x3c:
          puVar11 = local_68;
          if (local_68 == (undefined8 *)0x0) {
            if (DAT_02773300 != 0) {
              FUN_00d50b00();
            }
            puVar11 = (undefined8 *)FUN_00d8d520();
            local_68 = puVar11;
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          goto LAB_00ca25f0;
        case 0x3e:
          puVar11 = local_70;
          if (local_70 == (undefined8 *)0x0) {
            if (DAT_02773308 != 0) {
              FUN_00d50b00();
            }
            puVar11 = (undefined8 *)FUN_00d8d520();
            local_70 = puVar11;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
LAB_00ca25f0:
          *puVar15 = *puVar11;
          puVar15 = puVar15 + 1;
        }
        lVar13 = (longlong)puVar15 - (longlong)local_40 >> 1;
        if (iVar7 <= lVar13) {
          FUN_00c92120();
          iVar7 = iVar7 * 2;
          local_40 = (undefined8 *)puVar9[2];
          puVar15 = (undefined8 *)((longlong)local_40 + lVar13 * 2);
        }
        lVar14 = lVar14 + 1;
      } while (iVar6 != (int)lVar14);
    }
    FUN_00d920f0();
    if (local_58 != 0) {
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


