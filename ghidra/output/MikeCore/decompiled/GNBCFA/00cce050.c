// Function: FUN_00cce050
// Address: 00cce050
// Size: 530 bytes
// Class: GNBCFA


/* WARNING: Removing unreachable block (ram,0x00cce23f) */
/* WARNING: Removing unreachable block (ram,0x00cce248) */

void FUN_00cce050(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_40;
  char local_38;
  
  if (param_2 != 0) {
    if (unaff_RSI[2] == 0) {
      if ((DAT_028a7340 == 0) || (DAT_028a7349 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028a7340 == 0) {
          FUN_00c8e600();
          lVar2 = DAT_028a7340;
          if (DAT_028a7340 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == 0) {
                lVar2 = 0;
              }
              else {
                FUN_00d50b00();
                lVar2 = local_40;
              }
            }
            else {
              local_38 = '\0';
              lVar2 = local_40;
            }
            bVar4 = DAT_028a7340 != 0;
            DAT_028a7340 = lVar2;
            if (bVar4) {
              FUN_00d50b20();
              lVar2 = local_40;
            }
          }
          if ((lVar2 != 0) && (DAT_028a7348 == '\0')) {
            DAT_028a7348 = '\x01';
            FUN_00e8cb90();
            lVar2 = local_40;
          }
          if ((local_38 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          DAT_028a7349 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028a7349 = '\x01';
          FUN_00e8cb70();
        }
      }
      uVar1 = *(undefined8 *)(DAT_028a7340 + 0x10);
      iVar3 = *(int *)(DAT_028a7340 + 0x18);
      do {
        if (param_2 < iVar3) {
          iVar3 = (int)param_2;
        }
        (**(code **)(*unaff_RSI + 0x388))(iVar3,uVar1);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_00cce24d;
          }
        }
        else if (local_40 != 0) {
LAB_00cce24d:
          *unaff_RDI = local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        param_2 = param_2 - iVar3;
        if (param_2 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          return;
        }
      } while( true );
    }
    iVar3 = (int)unaff_RSI[5] + (int)param_2;
    if (*(int *)(unaff_RSI[2] + 0x18) < iVar3) {
      FUN_00c8e340(iVar3,0);
    }
    ___bzero();
    iVar3 = (int)unaff_RSI[5] + (int)param_2;
    *(int *)(unaff_RSI + 5) = iVar3;
    if (*(int *)((longlong)unaff_RSI + 0x2c) < iVar3) {
      *(int *)((longlong)unaff_RSI + 0x2c) = iVar3;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


