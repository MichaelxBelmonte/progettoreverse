// Function: FUN_009dc470
// Address: 009dc470
// Size: 1257 bytes
// Class: Unknown
// String references:
//   "AIL"
//   "CCEPT"
//   "OMMIT"
//   "RUNE"
//   "KIP"
//   "HEN"


undefined8 FUN_009dc470(void)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong *unaff_RDI;
  
  plVar1 = unaff_RDI + 0x11;
  pbVar6 = (byte *)unaff_RDI[0x10];
  pbVar4 = (byte *)unaff_RDI[0x11];
  pbVar8 = pbVar4 + 1;
  unaff_RDI[0x11] = (longlong)pbVar8;
  if (pbVar8 == pbVar6) {
    uVar7 = *(ulonglong *)unaff_RDI[1];
    do {
      *plVar1 = (longlong)pbVar4;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + -1;
    } while (*(char *)(uVar7 + 0x20 + (ulonglong)bVar2) != '\x01');
LAB_009dc561:
    lVar5 = (longlong)pbVar4 - unaff_RDI[0xf];
    goto LAB_009dc80f;
  }
  bVar2 = *pbVar8;
  if ((char)bVar2 < 'P') {
    if (bVar2 == 0x41) {
      *plVar1 = (longlong)(pbVar4 + 2);
      if (pbVar4 + 2 == pbVar6) {
        lVar5 = *(longlong *)unaff_RDI[1];
        do {
          *plVar1 = (longlong)pbVar8;
          uVar7 = (ulonglong)*pbVar8;
          pbVar8 = pbVar8 + -1;
        } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
      }
      else {
        cVar3 = FUN_009dd1da();
        if (cVar3 == '\0') goto LAB_009dc7df;
        pbVar8 = (byte *)unaff_RDI[0x11];
        if (pbVar8 == (byte *)unaff_RDI[0x10]) {
          lVar5 = *(longlong *)unaff_RDI[1];
        }
        else {
          uVar7 = (ulonglong)*pbVar8;
          lVar5 = *(longlong *)unaff_RDI[1];
          if (*(char *)(lVar5 + 0x20 + uVar7) == '\x02') {
            unaff_RDI[0x11] = (longlong)(pbVar8 + 1);
            goto LAB_009dc66b;
          }
        }
        pbVar8 = pbVar8 + -1;
        do {
          *plVar1 = (longlong)pbVar8;
          uVar7 = (ulonglong)*pbVar8;
          pbVar8 = pbVar8 + -1;
        } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
      }
    }
    else if (bVar2 == 0x43) {
      *plVar1 = (longlong)(pbVar4 + 2);
      if (pbVar4 + 2 == pbVar6) {
        lVar5 = *(longlong *)unaff_RDI[1];
        do {
          *plVar1 = (longlong)pbVar8;
          uVar7 = (ulonglong)*pbVar8;
          pbVar8 = pbVar8 + -1;
        } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
      }
      else {
        cVar3 = FUN_009dd1da();
        if (cVar3 == '\0') goto LAB_009dc7df;
        pbVar8 = (byte *)unaff_RDI[0x11];
        if (pbVar8 == (byte *)unaff_RDI[0x10]) {
          lVar5 = *(longlong *)unaff_RDI[1];
        }
        else {
          bVar2 = *pbVar8;
          lVar5 = *(longlong *)unaff_RDI[1];
          if (*(char *)(lVar5 + 0x20 + (ulonglong)bVar2) == '\x02') {
            unaff_RDI[0x11] = (longlong)(pbVar8 + 1);
            lVar5 = FUN_009d8a9c((ulonglong)bVar2,0x18);
            *(undefined4 *)(lVar5 + 0x10) = 2;
            goto LAB_009dc7d1;
          }
        }
        pbVar8 = pbVar8 + -1;
        do {
          *plVar1 = (longlong)pbVar8;
          uVar7 = (ulonglong)*pbVar8;
          pbVar8 = pbVar8 + -1;
        } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
      }
    }
    else {
      if (bVar2 != 0x46) goto LAB_009dc7df;
      pbVar4 = pbVar4 + 2;
      *plVar1 = (longlong)pbVar4;
      if (pbVar4 != pbVar6) {
        if (*(char *)(*(longlong *)unaff_RDI[1] + 0x20 + (ulonglong)*pbVar4) != '\x02') {
          cVar3 = FUN_009dd1da();
          if (cVar3 == '\0') goto LAB_009dc7df;
          pbVar6 = (byte *)unaff_RDI[0x10];
          pbVar4 = (byte *)unaff_RDI[0x11];
        }
        if (pbVar4 == pbVar6) {
          uVar7 = *(ulonglong *)unaff_RDI[1];
        }
        else {
          uVar7 = *(ulonglong *)unaff_RDI[1];
          if (*(char *)(uVar7 + 0x20 + (ulonglong)*pbVar4) == '\x02') {
            unaff_RDI[0x11] = (longlong)(pbVar4 + 1);
LAB_009dc66b:
            FUN_009d8a9c(uVar7,0x10);
            return 1;
          }
        }
        pbVar4 = pbVar4 + -1;
        do {
          *plVar1 = (longlong)pbVar4;
          bVar2 = *pbVar4;
          pbVar4 = pbVar4 + -1;
        } while (*(char *)(uVar7 + 0x20 + (ulonglong)bVar2) != '\x01');
        goto LAB_009dc561;
      }
      lVar5 = *(longlong *)unaff_RDI[1];
      do {
        *plVar1 = (longlong)pbVar8;
        uVar7 = (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + -1;
      } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
    }
  }
  else if (bVar2 == 0x50) {
    *plVar1 = (longlong)(pbVar4 + 2);
    if (pbVar4 + 2 == pbVar6) {
      lVar5 = *(longlong *)unaff_RDI[1];
      do {
        *plVar1 = (longlong)pbVar8;
        uVar7 = (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + -1;
      } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
    }
    else {
      cVar3 = FUN_009dd1da();
      if (cVar3 == '\0') goto LAB_009dc7df;
      pbVar8 = (byte *)unaff_RDI[0x11];
      if (pbVar8 == (byte *)unaff_RDI[0x10]) {
        lVar5 = *(longlong *)unaff_RDI[1];
      }
      else {
        bVar2 = *pbVar8;
        lVar5 = *(longlong *)unaff_RDI[1];
        if (*(char *)(lVar5 + 0x20 + (ulonglong)bVar2) == '\x02') {
          unaff_RDI[0x11] = (longlong)(pbVar8 + 1);
          lVar5 = FUN_009d8a9c((ulonglong)bVar2,0x18);
          *(undefined4 *)(lVar5 + 0x10) = 0;
LAB_009dc7d1:
          *(undefined1 *)(*unaff_RDI + 0x191) = 1;
          return 1;
        }
      }
      pbVar8 = pbVar8 + -1;
      do {
        *plVar1 = (longlong)pbVar8;
        uVar7 = (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + -1;
      } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
    }
  }
  else if (bVar2 == 0x53) {
    *plVar1 = (longlong)(pbVar4 + 2);
    if (pbVar4 + 2 == pbVar6) {
      lVar5 = *(longlong *)unaff_RDI[1];
      do {
        *plVar1 = (longlong)pbVar8;
        uVar7 = (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + -1;
      } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
    }
    else {
      cVar3 = FUN_009dd1da();
      if (cVar3 == '\0') goto LAB_009dc7df;
      pbVar8 = (byte *)unaff_RDI[0x11];
      if (pbVar8 == (byte *)unaff_RDI[0x10]) {
        lVar5 = *(longlong *)unaff_RDI[1];
      }
      else {
        bVar2 = *pbVar8;
        lVar5 = *(longlong *)unaff_RDI[1];
        if (*(char *)(lVar5 + 0x20 + (ulonglong)bVar2) == '\x02') {
          unaff_RDI[0x11] = (longlong)(pbVar8 + 1);
          lVar5 = FUN_009d8a9c((ulonglong)bVar2,0x18);
          *(undefined4 *)(lVar5 + 0x10) = 1;
          goto LAB_009dc7d1;
        }
      }
      pbVar8 = pbVar8 + -1;
      do {
        *plVar1 = (longlong)pbVar8;
        uVar7 = (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + -1;
      } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
    }
  }
  else if (bVar2 == 0x54) {
    *plVar1 = (longlong)(pbVar4 + 2);
    if (pbVar4 + 2 == pbVar6) {
      lVar5 = *(longlong *)unaff_RDI[1];
      do {
        *plVar1 = (longlong)pbVar8;
        uVar7 = (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + -1;
      } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
    }
    else {
      cVar3 = FUN_009dd1da();
      if (cVar3 == '\0') goto LAB_009dc7df;
      pbVar8 = (byte *)unaff_RDI[0x11];
      if (pbVar8 == (byte *)unaff_RDI[0x10]) {
        lVar5 = *(longlong *)unaff_RDI[1];
      }
      else {
        bVar2 = *pbVar8;
        lVar5 = *(longlong *)unaff_RDI[1];
        if (*(char *)(lVar5 + 0x20 + (ulonglong)bVar2) == '\x02') {
          unaff_RDI[0x11] = (longlong)(pbVar8 + 1);
          FUN_009d8a9c((ulonglong)bVar2,0x10);
          goto LAB_009dc7d1;
        }
      }
      pbVar8 = pbVar8 + -1;
      do {
        *plVar1 = (longlong)pbVar8;
        uVar7 = (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + -1;
      } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
    }
  }
  else {
LAB_009dc7df:
    lVar5 = *(longlong *)unaff_RDI[1];
    pbVar8 = (byte *)(unaff_RDI[0x11] + -1);
    do {
      *plVar1 = (longlong)pbVar8;
      uVar7 = (ulonglong)*pbVar8;
      pbVar8 = pbVar8 + -1;
    } while (*(char *)(lVar5 + 0x20 + uVar7) != '\x01');
  }
  lVar5 = (longlong)pbVar8 - unaff_RDI[0xf];
LAB_009dc80f:
  FUN_009d86be(uVar7,lVar5 + 1);
  return 0;
}


