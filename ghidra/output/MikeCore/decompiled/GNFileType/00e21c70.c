// Function: FUN_00e21c70
// Address: 00e21c70
// Size: 1646 bytes
// Class: GNFileType
// String references:
//   "expected ':' after key '%@' in object"


/* WARNING: Removing unreachable block (ram,0x00e220de) */
/* WARNING: Removing unreachable block (ram,0x00e220e7) */
/* WARNING: Removing unreachable block (ram,0x00e22159) */
/* WARNING: Removing unreachable block (ram,0x00e22162) */
/* WARNING: Removing unreachable block (ram,0x00e220f6) */
/* WARNING: Removing unreachable block (ram,0x00e22102) */
/* WARNING: Removing unreachable block (ram,0x00e2216d) */
/* WARNING: Removing unreachable block (ram,0x00e22176) */

void FUN_00e21c70(void)

{
  short sVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar9;
  longlong local_70;
  char local_68;
  undefined8 *local_50;
  char local_48;
  
  cVar6 = FUN_00e20b20();
  lVar3 = DAT_02785a60;
  if (cVar6 == '\0') {
    if (DAT_02785a60 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
           0x7b) {
    *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
    cVar6 = FUN_00e20b20();
    lVar3 = DAT_02785a68;
    if (cVar6 != '\0') {
      if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
          0x7d) {
        *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        *unaff_RDI = plVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar7 + 0x18))();
      bVar9 = false;
      while( true ) {
        puVar5 = local_50;
        cVar6 = FUN_00e20b20();
        lVar3 = DAT_02785a70;
        if (cVar6 == '\0') {
          if (DAT_02785a70 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e222bc;
        }
        if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2)
            == 0x7d) break;
        FUN_00e21390();
        if (local_48 == '\0') {
          if (local_50 == (undefined8 *)0x0) goto LAB_00e222bc;
          FUN_00d50b00();
        }
        else if (local_50 == (undefined8 *)0x0) goto LAB_00e222bc;
        cVar6 = FUN_00e20b20();
        lVar3 = DAT_02785a78;
        if (cVar6 == '\0') {
          if (DAT_02785a78 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          bVar9 = true;
          bVar2 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) +
                           (longlong)*(int *)(unaff_RSI + 0x30) * 2) == 0x3a) {
          *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
          cVar6 = FUN_00e20b20();
          lVar3 = DAT_02785a80;
          if (cVar6 == '\0') {
            if (DAT_02785a80 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            bVar9 = true;
            bVar2 = true;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00e20d30();
            if (local_48 == '\0') {
              if (local_50 != (undefined8 *)0x0) {
                FUN_00d50b00();
                goto LAB_00e21ee1;
              }
              if (*(longlong *)(unaff_RSI + 0x10) != 0) goto LAB_00e22067;
LAB_00e22114:
              if (*(char *)(unaff_RSI + 0xd) != '\0') {
                FUN_00ca1170();
              }
              if (*(char *)(unaff_RSI + 0xe) == '\0') {
                local_48 = '\0';
                FUN_00ca0840();
              }
LAB_00e2217b:
              cVar6 = FUN_00e20b20();
              lVar4 = DAT_02785a88;
              lVar3 = DAT_02785a68;
              if (cVar6 == '\0') {
                if (DAT_02785a68 != 0) {
                  FUN_00d50b00();
                }
                FUN_00e20940();
                bVar2 = true;
                bVar9 = true;
                if (lVar3 != 0) {
                  FUN_00d50b20();
                }
              }
              else {
                sVar1 = *(short *)(*(longlong *)(unaff_RSI + 0x20) +
                                  (longlong)*(int *)(unaff_RSI + 0x30) * 2);
                bVar2 = false;
                if (sVar1 != 0x7d) {
                  if (sVar1 == 0x2c) {
                    *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
                  }
                  else {
                    if (DAT_02785a88 != 0) {
                      FUN_00d50b00();
                    }
                    FUN_00e20940();
                    bVar2 = true;
                    bVar9 = true;
                    if (lVar4 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
            else {
LAB_00e21ee1:
              if (*(longlong *)(unaff_RSI + 0x10) == 0) {
                if (local_50 == (undefined8 *)0x0) goto LAB_00e22114;
                local_48 = '\0';
                FUN_00ca0840();
                goto LAB_00e2217b;
              }
              bVar2 = true;
              bVar9 = true;
            }
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\x01';
          FUN_00d50b00();
          FUN_00d8cb40();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00e20940();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_50 = &DAT_024c5048;
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
LAB_00e22067:
          bVar9 = true;
          bVar2 = true;
        }
        FUN_00d50b20();
        if (((bVar2) || (*(int *)(unaff_RSI + 0x34) <= *(int *)(unaff_RSI + 0x30))) || (bVar9))
        goto LAB_00e2229f;
      }
      *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
LAB_00e2229f:
      if (bVar9) {
LAB_00e222bc:
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)0x0;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar8 = plVar7;
        }
      }
      *unaff_RDI = plVar8;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (DAT_02785a68 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_02785a60 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


