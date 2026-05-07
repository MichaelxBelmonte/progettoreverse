// Function: FUN_009fb00b
// Address: 009fb00b
// Size: 544 bytes
// Class: Unknown


int FUN_009fb00b(uint param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  bad_cast *this;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  short sVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  
  for (uVar9 = param_1; uVar9 != 0; uVar9 = uVar9 - 1) {
    plVar8 = (longlong *)*unaff_RDI;
    if (plVar8 == (longlong *)0x0) {
LAB_009fb067:
      plVar8 = (longlong *)0x0;
    }
    else if (plVar8[3] == plVar8[4]) {
      iVar5 = (**(code **)(*plVar8 + 0x48))();
      if (iVar5 == -1) {
        *unaff_RDI = 0;
        goto LAB_009fb067;
      }
      plVar8 = (longlong *)*unaff_RDI;
    }
    plVar2 = (longlong *)*unaff_RSI;
    if (plVar2 == (longlong *)0x0) {
LAB_009fb0b9:
      bVar10 = plVar8 == (longlong *)0x0;
LAB_009fb0bc:
      if (bVar10) break;
    }
    else {
      if (plVar2[3] == plVar2[4]) {
        iVar5 = (**(code **)(*plVar2 + 0x48))();
        if (iVar5 == -1) {
          *unaff_RSI = 0;
          goto LAB_009fb0b9;
        }
        bVar10 = (plVar8 == (longlong *)0x0) == (*unaff_RSI == 0);
        goto LAB_009fb0bc;
      }
      if (plVar8 != (longlong *)0x0) break;
    }
    plVar8 = (longlong *)*unaff_RDI;
    if ((char *)plVar8[3] == (char *)plVar8[4]) {
      cVar4 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      cVar4 = *(char *)plVar8[3];
    }
    if ((0xff < (uint)(int)cVar4) ||
       ((PTR___DefaultRuneLocale_0249c238[(ulonglong)(uint)(int)cVar4 * 4 + 0x3d] & 4) == 0)) {
      plVar8 = (longlong *)*unaff_RDI;
      if ((char *)plVar8[3] == (char *)plVar8[4]) {
        cVar4 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        cVar4 = *(char *)plVar8[3];
      }
      if (*param_3 != cVar4) break;
    }
    plVar8 = (longlong *)*unaff_RDI;
    if ((char *)plVar8[3] == (char *)plVar8[4]) {
      cVar4 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      cVar4 = *(char *)plVar8[3];
    }
    if ((*param_3 != cVar4) && (plVar8 = (longlong *)*unaff_RDI, plVar8[3] == plVar8[4])) {
      (**(code **)(*plVar8 + 0x48))();
    }
    std::string::push_back(cVar4);
    plVar8 = (longlong *)*unaff_RDI;
    if (plVar8[3] == plVar8[4]) {
      (**(code **)(*plVar8 + 0x50))();
    }
    else {
      plVar8[3] = plVar8[3] + 1;
    }
  }
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    uVar6 = (ulonglong)(bVar1 >> 1);
  }
  else {
    uVar6 = *(ulonglong *)(param_2 + 8);
  }
  sVar7 = -1;
  if (param_1 <= uVar6) {
    this = (bad_cast *)(param_2 + 1);
    if ((bVar1 & 1) != 0) {
      this = *(bad_cast **)(param_2 + 0x10);
    }
    cVar4 = FUN_009fb25e();
    if (cVar4 == '\0') {
      std::bad_cast::bad_cast(this);
      FUN_009af240();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    sVar7 = 0;
  }
  return (int)sVar7;
}


