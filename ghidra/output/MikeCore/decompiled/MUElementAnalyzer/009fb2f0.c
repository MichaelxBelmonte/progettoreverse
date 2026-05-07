// Function: FUN_009fb2f0
// Address: 009fb2f0
// Size: 621 bytes
// Class: MUElementAnalyzer


int FUN_009fb2f0(byte *param_1,longlong *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  __darwin_ct_rune_t _Var6;
  longlong *plVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  ulonglong uVar11;
  longlong unaff_RDI;
  bool bVar12;
  longlong *plVar13;
  char cVar14;
  
  uVar2 = *param_3;
  *param_3 = uVar2 + 1;
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar11 = (ulonglong)(bVar1 >> 1);
  }
  else {
    uVar11 = *(ulonglong *)(param_1 + 8);
  }
  if (uVar11 < uVar2 + 1) {
    plVar7 = (longlong *)*unaff_RSI;
    pbVar8 = param_1;
    if (plVar7 == (longlong *)0x0) {
LAB_009fb38a:
      plVar7 = (longlong *)0x0;
    }
    else if (plVar7[3] == plVar7[4]) {
      iVar4 = (**(code **)(*plVar7 + 0x48))();
      if (iVar4 == -1) {
        *unaff_RSI = 0;
        goto LAB_009fb38a;
      }
      plVar7 = (longlong *)*unaff_RSI;
    }
    iVar4 = (int)pbVar8;
    plVar9 = (longlong *)*param_2;
    if (plVar9 == (longlong *)0x0) {
LAB_009fb3db:
      if (plVar7 == (longlong *)0x0) {
LAB_009fb3f6:
        sVar3 = 0;
        goto LAB_009fb54d;
      }
    }
    else if (plVar9[3] == plVar9[4]) {
      iVar5 = (**(code **)(*plVar9 + 0x48))();
      iVar4 = (int)pbVar8;
      if (iVar5 == -1) {
        *param_2 = 0;
        goto LAB_009fb3db;
      }
      iVar4 = (int)CONCAT71((int7)((ulonglong)pbVar8 >> 8),plVar7 != (longlong *)0x0);
      sVar3 = 0;
      if ((*param_2 == 0) != (plVar7 != (longlong *)0x0)) goto LAB_009fb54d;
    }
    else if (plVar7 != (longlong *)0x0) goto LAB_009fb3f6;
    plVar7 = (longlong *)*unaff_RSI;
    if (plVar7[3] == plVar7[4]) {
      (**(code **)(*plVar7 + 0x48))();
    }
    bVar12 = true;
  }
  else {
    if ((bVar1 & 1) == 0) {
      iVar4 = (int)param_1 + 1;
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
    }
    bVar12 = false;
  }
  _Var6 = ___tolower(iVar4);
  plVar7 = *(longlong **)(unaff_RDI + 8);
  if (plVar7 != (longlong *)0x0) {
    plVar13 = (longlong *)(unaff_RDI + 8);
    plVar9 = plVar7;
    plVar10 = plVar13;
    do {
      cVar14 = (char)_Var6;
      if (cVar14 <= (char)plVar9[4]) {
        plVar10 = plVar9;
      }
      plVar9 = (longlong *)plVar9[(char)plVar9[4] < cVar14];
    } while (plVar9 != (longlong *)0x0);
    do {
      plVar9 = (longlong *)(ulonglong)((char)plVar7[4] <= cVar14);
      if (cVar14 < (char)plVar7[4]) {
        plVar13 = plVar7;
      }
      plVar7 = (longlong *)plVar7[(longlong)plVar9];
    } while (plVar7 != (longlong *)0x0);
    while (plVar7 = plVar10, plVar7 != plVar13) {
      cVar14 = (char)plVar9;
      if (bVar12) {
        plVar9 = (longlong *)*unaff_RSI;
        if (plVar9[3] == plVar9[4]) {
          (**(code **)(*plVar9 + 0x50))();
        }
        else {
          plVar9[3] = plVar9[3] + 1;
        }
        std::string::push_back(cVar14);
      }
      if (((short)plVar7[8] != -1) && (uVar2 = *param_3, *(ushort *)(param_1 + 0x18) < uVar2)) {
        *(short *)(param_1 + 0x1a) = (short)plVar7[8];
        *(short *)(param_1 + 0x18) = (short)uVar2;
      }
      FUN_009fb2f0(param_1,param_2,param_3);
      uVar2 = *param_3;
      *param_3 = uVar2 - 1;
      if ((*param_1 & 1) == 0) {
        uVar11 = (ulonglong)(*param_1 >> 1);
      }
      else {
        uVar11 = *(ulonglong *)(param_1 + 8);
      }
      if (uVar2 - 1 <= uVar11) {
        bVar12 = false;
      }
      plVar9 = (longlong *)plVar7[1];
      if ((longlong *)plVar7[1] == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        plVar10 = (longlong *)plVar7[2];
        if (*(longlong **)plVar7[2] != plVar7) {
          do {
            plVar7 = (longlong *)plVar7[2];
            plVar9 = plVar7;
            plVar10 = (longlong *)plVar7[2];
          } while (*(longlong **)plVar7[2] != plVar7);
        }
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (longlong *)*plVar10;
        } while (plVar9 != (longlong *)0x0);
        plVar9 = (longlong *)0x0;
      }
    }
  }
  sVar3 = *(short *)(param_1 + 0x1a);
LAB_009fb54d:
  return (int)sVar3;
}


