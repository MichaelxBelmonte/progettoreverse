// Function: FUN_00d8f4b0
// Address: 00d8f4b0
// Size: 1599 bytes
// Class: GNString


undefined8 * FUN_00d8f4b0(int param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  
  iVar2 = *(int *)(unaff_RSI + 4);
  if (iVar2 == -1) {
    if (unaff_RSI[2] != 0) {
      iVar2 = FUN_00e7dde0();
      goto joined_r0x00d8f4ef;
    }
  }
  else {
joined_r0x00d8f4ef:
    if (iVar2 != 0) {
      puVar5 = unaff_RSI;
      switch(param_2) {
      case 1:
        FUN_00d50b00();
LAB_00d8f540:
        iVar2 = *(int *)(puVar5 + 4);
        if (iVar2 == -1) {
          if (puVar5[2] != 0) {
            iVar2 = FUN_00e7dde0();
            goto LAB_00d8f557;
          }
          if (-1 < param_1) goto LAB_00d8fac1;
        }
        else {
LAB_00d8f557:
          if (iVar2 <= param_1) goto LAB_00d8fac1;
        }
        if (puVar5 == unaff_RSI) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_025795a8;
          FUN_00d500e0();
          if (puVar3 == puVar5) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            puVar5 = puVar3;
          }
          FUN_00d50b00();
          if (((undefined8 *)puVar5[2] != (undefined8 *)0x0) &&
             ((undefined8 *)puVar5[2] != puVar5 + 5)) {
            FUN_00e83070();
          }
          puVar5[2] = 0;
          if (*(int *)(puVar5 + 4) != -1) {
            FUN_00e83070();
            puVar5[3] = 0;
            *(undefined4 *)(puVar5 + 4) = 0xffffffff;
          }
          FUN_00d8dbf0();
          FUN_00d50b20();
          FUN_00e7b4e0();
          lVar1 = DAT_0272fa48;
          if (DAT_0272fa48 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00e7b4e0();
          lVar1 = DAT_028a8368;
          if (DAT_028a8368 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00d8f540;
      case 2:
        FUN_00d50b00();
        do {
          bVar4 = true;
LAB_00d8f6f0:
          iVar2 = *(int *)(puVar5 + 4);
          if (iVar2 == -1) {
            if (puVar5[2] != 0) {
              iVar2 = FUN_00e7dde0();
              goto LAB_00d8f707;
            }
            if (-1 < param_1) goto LAB_00d8fac1;
          }
          else {
LAB_00d8f707:
            if (iVar2 <= param_1) goto LAB_00d8fac1;
          }
          if (puVar5 != unaff_RSI) {
            if (bVar4) {
              FUN_00e7b4e0();
              lVar1 = DAT_028a8368;
              if (DAT_028a8368 != 0) {
                FUN_00d50b00();
              }
              FUN_00d8e100();
              bVar4 = false;
              if (lVar1 != 0) {
                bVar4 = false;
                FUN_00d50b20();
              }
            }
            else {
              FUN_00e7b4e0();
              lVar1 = DAT_028a8368;
              if (DAT_028a8368 != 0) {
                FUN_00d50b00();
              }
              FUN_00d8e100();
              bVar4 = true;
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            goto LAB_00d8f6f0;
          }
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_025795a8;
          FUN_00d500e0();
          if (puVar3 == puVar5) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            puVar5 = puVar3;
          }
          FUN_00d50b00();
          if (((undefined8 *)puVar5[2] != (undefined8 *)0x0) &&
             ((undefined8 *)puVar5[2] != puVar5 + 5)) {
            FUN_00e83070();
          }
          puVar5[2] = 0;
          if (*(int *)(puVar5 + 4) != -1) {
            FUN_00e83070();
            puVar5[3] = 0;
            *(undefined4 *)(puVar5 + 4) = 0xffffffff;
          }
          FUN_00d8dbf0();
          FUN_00d50b20();
          if ((*(int *)(puVar5 + 4) == -1) && (puVar5[2] != 0)) {
            FUN_00e7dde0();
          }
          FUN_00e7b4e0();
          lVar1 = DAT_0272fa48;
          if (DAT_0272fa48 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        } while( true );
      case 3:
        FUN_00d50b00();
LAB_00d8f930:
        iVar2 = *(int *)(puVar5 + 4);
        if (iVar2 == -1) {
          if (puVar5[2] != 0) {
            iVar2 = FUN_00e7dde0();
            goto LAB_00d8f94b;
          }
          if (-1 < param_1) goto LAB_00d8fac1;
        }
        else {
LAB_00d8f94b:
          if (iVar2 <= param_1) goto LAB_00d8fac1;
        }
        if (puVar5 == unaff_RSI) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_025795a8;
          FUN_00d500e0();
          if (puVar3 == puVar5) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            puVar5 = puVar3;
          }
          FUN_00d50b00();
          if (((undefined8 *)puVar5[2] != (undefined8 *)0x0) &&
             ((undefined8 *)puVar5[2] != puVar5 + 5)) {
            FUN_00e83070();
          }
          puVar5[2] = 0;
          if (*(int *)(puVar5 + 4) != -1) {
            FUN_00e83070();
            puVar5[3] = 0;
            *(undefined4 *)(puVar5 + 4) = 0xffffffff;
          }
          FUN_00d8dbf0();
          FUN_00d50b20();
          if ((*(int *)(puVar5 + 4) == -1) && (puVar5[2] != 0)) {
            FUN_00e7dde0();
          }
          FUN_00e7b4e0();
          lVar1 = DAT_0272fa48;
          if (DAT_0272fa48 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00e7b4e0();
          lVar1 = DAT_028a8368;
          if (DAT_028a8368 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00d8f930;
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  FUN_00d50b00();
  *unaff_RDI = unaff_RSI;
LAB_00d8fad6:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
LAB_00d8fac1:
  if (puVar5 != unaff_RSI) {
    *(byte *)((longlong)puVar5 + 0x24) = *(byte *)((longlong)puVar5 + 0x24) & 0xfe;
  }
  *unaff_RDI = puVar5;
  goto LAB_00d8fad6;
}


