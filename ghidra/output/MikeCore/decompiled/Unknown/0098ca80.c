// Function: FUN_0098ca80
// Address: 0098ca80
// Size: 825 bytes
// Class: Unknown


void FUN_0098ca80(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  plVar8 = (longlong *)*unaff_RSI;
  plVar6 = unaff_RSI;
  if (plVar8 == (longlong *)0x0) {
LAB_0098caa4:
    plVar8 = (longlong *)plVar6[1];
    if (plVar8 == (longlong *)0x0) {
      bVar3 = false;
      plVar8 = (longlong *)0x0;
      goto LAB_0098cac3;
    }
  }
  else {
    plVar5 = (longlong *)unaff_RSI[1];
    if ((longlong *)unaff_RSI[1] != (longlong *)0x0) {
      do {
        plVar6 = plVar5;
        plVar5 = (longlong *)*plVar6;
      } while ((longlong *)*plVar6 != (longlong *)0x0);
      goto LAB_0098caa4;
    }
  }
  plVar8[2] = plVar6[2];
  bVar3 = true;
LAB_0098cac3:
  puVar1 = (undefined8 *)plVar6[2];
  plVar5 = (longlong *)*puVar1;
  if (plVar5 == plVar6) {
    *puVar1 = plVar8;
    if (plVar6 == unaff_RDI) {
      plVar5 = (longlong *)0x0;
      unaff_RDI = plVar8;
    }
    else {
      plVar5 = (longlong *)puVar1[1];
    }
  }
  else {
    puVar1[1] = plVar8;
  }
  lVar4 = plVar6[3];
  if (plVar6 != unaff_RSI) {
    lVar2 = unaff_RSI[2];
    plVar6[2] = lVar2;
    *(longlong **)(lVar2 + (ulonglong)(*(longlong **)unaff_RSI[2] != unaff_RSI) * 8) = plVar6;
    lVar2 = *unaff_RSI;
    *plVar6 = lVar2;
    *(longlong **)(lVar2 + 0x10) = plVar6;
    lVar2 = unaff_RSI[1];
    plVar6[1] = lVar2;
    if (lVar2 != 0) {
      *(longlong **)(lVar2 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)unaff_RSI[3];
    if (unaff_RDI == unaff_RSI) {
      unaff_RDI = plVar6;
    }
  }
  if (((char)lVar4 != '\0') && (unaff_RDI != (longlong *)0x0)) {
    if (!bVar3) {
      while( true ) {
        plVar8 = (longlong *)plVar5[2];
        if ((longlong *)*plVar8 == plVar5) break;
        if ((char)plVar5[3] == '\0') {
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar8 + 3) = 0;
          plVar6 = (longlong *)plVar8[1];
          lVar4 = *plVar6;
          plVar8[1] = lVar4;
          if (lVar4 != 0) {
            *(longlong **)(lVar4 + 0x10) = plVar8;
          }
          plVar6[2] = plVar8[2];
          ((undefined8 *)plVar8[2])[*(longlong **)plVar8[2] != plVar8] = plVar6;
          *plVar6 = (longlong)plVar8;
          plVar8[2] = (longlong)plVar6;
          if (unaff_RDI == (longlong *)*plVar5) {
            unaff_RDI = plVar5;
          }
          plVar5 = (longlong *)((longlong *)*plVar5)[1];
        }
        plVar8 = (longlong *)*plVar5;
        if ((plVar8 != (longlong *)0x0) && ((char)plVar8[3] == '\0')) {
          plVar9 = (longlong *)plVar5[1];
          if (plVar9 != (longlong *)0x0) goto LAB_0098cc97;
LAB_0098cc9d:
          *(undefined1 *)(plVar8 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 0;
          lVar4 = plVar8[1];
          *plVar5 = lVar4;
          if (lVar4 != 0) {
            *(longlong **)(lVar4 + 0x10) = plVar5;
          }
          plVar8[2] = plVar5[2];
          ((undefined8 *)plVar5[2])[*(longlong **)plVar5[2] != plVar5] = plVar8;
          plVar8[1] = (longlong)plVar5;
          plVar5[2] = (longlong)plVar8;
          plVar7 = plVar8;
          plVar9 = plVar5;
LAB_0098ccde:
          plVar6 = (longlong *)plVar7[2];
          *(char *)(plVar7 + 3) = (char)plVar6[3];
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(plVar9 + 3) = 1;
          plVar8 = (longlong *)plVar6[1];
          lVar4 = *plVar8;
          plVar6[1] = lVar4;
          if (lVar4 != 0) {
            *(longlong **)(lVar4 + 0x10) = plVar6;
          }
          plVar8[2] = plVar6[2];
          ((longlong *)plVar6[2])[*(longlong **)plVar6[2] != plVar6] = (longlong)plVar8;
          *plVar8 = (longlong)plVar6;
LAB_0098cdb2:
          plVar6[2] = (longlong)plVar8;
          return;
        }
        plVar9 = (longlong *)plVar5[1];
        if ((plVar9 != (longlong *)0x0) && ((char)plVar9[3] == '\0')) {
LAB_0098cc97:
          plVar7 = plVar5;
          if ((char)plVar9[3] != '\0') goto LAB_0098cc9d;
          goto LAB_0098ccde;
        }
        *(undefined1 *)(plVar5 + 3) = 0;
        plVar8 = (longlong *)plVar5[2];
        plVar9 = unaff_RDI;
        if ((longlong *)plVar5[2] == unaff_RDI) goto LAB_0098cc85;
LAB_0098cc67:
        unaff_RDI = plVar8;
        if ((char)unaff_RDI[3] == '\0') goto LAB_0098cc85;
        plVar5 = (longlong *)((undefined8 *)unaff_RDI[2])[*(longlong **)unaff_RDI[2] == unaff_RDI];
        unaff_RDI = plVar9;
      }
      plVar6 = plVar5;
      plVar9 = unaff_RDI;
      if ((char)plVar5[3] == '\0') {
        *(undefined1 *)(plVar5 + 3) = 1;
        *(undefined1 *)(plVar8 + 3) = 0;
        plVar6 = (longlong *)plVar5[1];
        *plVar8 = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) {
          plVar6[2] = (longlong)plVar8;
        }
        plVar5[2] = plVar8[2];
        puVar1 = (undefined8 *)plVar8[2];
        if ((longlong *)*puVar1 == plVar8) {
          *puVar1 = plVar5;
          plVar6 = (longlong *)*plVar8;
        }
        else {
          puVar1[1] = plVar5;
        }
        plVar5[1] = (longlong)plVar8;
        plVar8[2] = (longlong)plVar5;
        if (unaff_RDI == plVar8) {
          plVar9 = plVar5;
        }
      }
      plVar8 = (longlong *)*plVar6;
      plVar5 = plVar6;
      if ((plVar8 == (longlong *)0x0) || ((char)plVar8[3] != '\0')) {
        plVar7 = (longlong *)plVar6[1];
        if ((plVar7 == (longlong *)0x0) || ((char)plVar7[3] != '\0')) {
          *(undefined1 *)(plVar6 + 3) = 0;
          unaff_RDI = (longlong *)plVar6[2];
          plVar8 = unaff_RDI;
          if (unaff_RDI != plVar9) goto LAB_0098cc67;
LAB_0098cc85:
          *(undefined1 *)(unaff_RDI + 3) = 1;
          return;
        }
        if ((plVar8 == (longlong *)0x0) || ((char)plVar8[3] != '\0')) {
          *(undefined1 *)(plVar7 + 3) = 1;
          *(undefined1 *)(plVar6 + 3) = 0;
          lVar4 = *plVar7;
          plVar6[1] = lVar4;
          if (lVar4 != 0) {
            *(longlong **)(lVar4 + 0x10) = plVar6;
          }
          plVar7[2] = plVar6[2];
          ((undefined8 *)plVar6[2])[*(longlong **)plVar6[2] != plVar6] = plVar7;
          *plVar7 = (longlong)plVar6;
          plVar6[2] = (longlong)plVar7;
          plVar5 = plVar7;
          plVar8 = plVar6;
        }
      }
      plVar6 = (longlong *)plVar5[2];
      *(char *)(plVar5 + 3) = (char)plVar6[3];
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar8 + 3) = 1;
      plVar8 = (longlong *)*plVar6;
      lVar4 = plVar8[1];
      *plVar6 = lVar4;
      if (lVar4 != 0) {
        *(longlong **)(lVar4 + 0x10) = plVar6;
      }
      plVar8[2] = plVar6[2];
      ((undefined8 *)plVar6[2])[*(longlong **)plVar6[2] != plVar6] = plVar8;
      plVar8[1] = (longlong)plVar6;
      goto LAB_0098cdb2;
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  return;
}


