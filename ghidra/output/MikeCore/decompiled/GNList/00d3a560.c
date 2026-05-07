// Function: FUN_00d3a560
// Address: 00d3a560
// Size: 1035 bytes
// Class: GNList


void FUN_00d3a560(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  uint *puVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 uVar17;
  undefined1 auVar18 [8];
  undefined1 local_48 [8];
  char cStack_40;
  
  lVar6 = *(longlong *)(unaff_RDI + 0x28);
  if ((*(undefined1 (**) [16])(lVar6 + 0x10))[1][0] != 'v') {
    **(undefined1 (**) [16])(lVar6 + 0x10) = (undefined1  [16])0x0;
    lVar6 = *(longlong *)(unaff_RDI + 0x28);
  }
  if (0x2f < *(int *)(lVar6 + 0x18)) {
    puVar14 = (uint *)0x0;
    uVar15 = 0;
    do {
      puVar12 = &switchD_00d3a5d7::switchdataD_00d3a978;
      uVar2 = _cStack_40;
      switch(*(undefined1 *)(*(longlong *)(lVar6 + 0x10) + 0x28 + (longlong)puVar14)) {
      case 0x40:
        FUN_00e8d170(&switchD_00d3a5d7::switchdataD_00d3a978,uVar15 & 0xffffffff);
        if ((cStack_40 != '\0') && (local_48 != (undefined1  [8])0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00d3a843;
      default:
        goto switchD_00d3a5d7_caseD_41;
      case 0x43:
        cVar3 = (**(code **)*unaff_RSI)();
        plVar10 = &DAT_023dd9f0;
        if (cVar3 == 'C') {
LAB_00d3a833:
          plVar10 = (longlong *)(**(code **)(*unaff_RSI + 0x10))();
        }
        goto LAB_00d3a840;
      case 0x45:
        uVar4 = (**(code **)*unaff_RSI)();
        puVar12 = (uint *)(ulonglong)uVar4;
        plVar10 = &DAT_023dd9e0;
        plVar13 = &DAT_023dd9e8;
        if ((char)uVar4 == 'E') {
LAB_00d3a6b8:
          plVar10 = (longlong *)(**(code **)(*unaff_RSI + 0x10))();
          plVar13 = plVar10 + 1;
        }
        goto LAB_00d3a6cc;
      case 0x49:
        local_48._0_4_ = FUN_00e8ce70();
        break;
      case 0x50:
        uVar4 = (**(code **)*unaff_RSI)();
        puVar12 = (uint *)(ulonglong)uVar4;
        plVar10 = &DAT_023dd9c8;
        if ((char)uVar4 == 'P') {
          plVar10 = (longlong *)(**(code **)(*unaff_RSI + 0x10))();
        }
        auVar18 = (undefined1  [8])*plVar10;
        local_48 = auVar18;
        _local_48 = CONCAT88(uVar2,local_48);
        goto LAB_00d3a6da;
      case 0x52:
        uVar4 = (**(code **)*unaff_RSI)();
        puVar12 = (uint *)(ulonglong)uVar4;
        plVar10 = &DAT_023dd9d0;
        plVar13 = &DAT_023dd9d8;
        if ((char)uVar4 == 'R') goto LAB_00d3a6b8;
LAB_00d3a6cc:
        auVar18 = (undefined1  [8])*plVar10;
        unique0x10000104 = (int)*plVar13;
        local_48 = auVar18;
        unique0x10000108 = (int)((ulonglong)*plVar13 >> 0x20);
LAB_00d3a6da:
        lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
        cVar3 = *(char *)(lVar6 + 0x28 + (longlong)puVar14);
        goto joined_r0x00d3a71c;
      case 0x5e:
        auVar18 = (undefined1  [8])FUN_00e8d220();
        local_48 = auVar18;
        _local_48 = CONCAT88(uVar2,local_48);
        lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
        cVar3 = *(char *)(lVar6 + 0x28 + (longlong)puVar14);
        goto joined_r0x00d3a71c;
      case 0x62:
        cVar3 = (**(code **)*unaff_RSI)();
        if (cVar3 == 'b') {
          pcVar7 = (char *)(**(code **)(*unaff_RSI + 0x10))();
          uVar17 = *pcVar7 != '\0';
        }
        else {
LAB_00d3a8a3:
          uVar17 = 0;
        }
        goto LAB_00d3a8a5;
      case 99:
        cVar3 = (**(code **)*unaff_RSI)();
        if (cVar3 != 'c') goto LAB_00d3a8a3;
        puVar8 = (undefined1 *)(**(code **)(*unaff_RSI + 0x10))();
        uVar17 = *puVar8;
LAB_00d3a8a5:
        local_48[0] = uVar17;
        break;
      case 100:
        auVar18 = (undefined1  [8])FUN_00e8ce20();
        local_48 = auVar18;
        _local_48 = CONCAT88(uVar2,local_48);
        lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
        cVar3 = *(char *)(lVar6 + 0x28 + (longlong)puVar14);
joined_r0x00d3a71c:
        if (cVar3 == '@') goto LAB_00d3a8be;
        goto LAB_00d3a8f8;
      case 0x66:
        cVar3 = (**(code **)*unaff_RSI)();
        local_48._0_4_ = 0;
        if (cVar3 == 'f') {
          puVar9 = (undefined4 *)(**(code **)(*unaff_RSI + 0x10))();
          local_48._0_4_ = *puVar9;
        }
        break;
      case 0x69:
        cVar3 = (**(code **)*unaff_RSI)();
        puVar12 = (uint *)0x0;
        if (cVar3 == 'i') {
          puVar12 = (uint *)(**(code **)(*unaff_RSI + 0x10))();
          puVar12 = (uint *)(ulonglong)*puVar12;
        }
        local_48._0_4_ = (int)puVar12;
        break;
      case 0x6c:
        cVar3 = (**(code **)*unaff_RSI)();
        if (cVar3 == 'l') goto LAB_00d3a833;
        local_48 = (undefined1  [8])0x0;
        goto LAB_00d3a843;
      case 0x71:
        cVar3 = (**(code **)*unaff_RSI)();
        plVar10 = &DAT_023de330;
        if (cVar3 == 'q') goto LAB_00d3a833;
LAB_00d3a840:
        local_48 = (undefined1  [8])*plVar10;
LAB_00d3a843:
        _local_48 = CONCAT88(uVar2,local_48);
        lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
        puVar12 = puVar14;
        if (*(char *)(lVar6 + 0x28 + (longlong)puVar14) != '@') goto LAB_00d3a8f8;
        lVar16 = *(longlong *)(lVar6 + 0x18 + (longlong)puVar14);
        auVar18 = local_48;
        if ((undefined1  [8])lVar16 != local_48) goto LAB_00d3a8c8;
        goto switchD_00d3a5d7_caseD_41;
      case 0x73:
        cVar3 = (**(code **)*unaff_RSI)();
        if (cVar3 == 's') {
          puVar11 = (undefined2 *)(**(code **)(*unaff_RSI + 0x10))();
          local_48._0_2_ = *puVar11;
        }
        else {
          auVar1._14_2_ = 0;
          auVar1._0_14_ = stack0xffffffffffffffba;
          _local_48 = auVar1 << 0x10;
        }
      }
      lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
      if (*(char *)(lVar6 + 0x28 + (longlong)puVar14) == '@') {
        auVar18 = local_48;
LAB_00d3a8be:
        lVar16 = *(longlong *)(lVar6 + 0x18 + (longlong)puVar14);
        if ((undefined1  [8])lVar16 != auVar18) {
LAB_00d3a8c8:
          if (auVar18 != (undefined1  [8])0x0) {
            FUN_00d50b00();
          }
          *(undefined1 (*) [8])(lVar6 + 0x18 + (longlong)puVar14) = auVar18;
          if (lVar16 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
LAB_00d3a8f8:
        iVar5 = FUN_00e82730();
        _memcpy(puVar12,(void *)(longlong)iVar5,param_3);
      }
switchD_00d3a5d7_caseD_41:
      lVar6 = *(longlong *)(unaff_RDI + 0x28);
      puVar14 = puVar14 + 6;
      lVar16 = uVar15 + 2;
      uVar15 = uVar15 + 1;
    } while (lVar16 < *(int *)(lVar6 + 0x18) / 0x18);
  }
  return;
}


