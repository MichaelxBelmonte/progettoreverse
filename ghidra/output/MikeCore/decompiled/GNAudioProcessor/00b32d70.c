// Function: FUN_00b32d70
// Address: 00b32d70
// Size: 938 bytes
// Class: GNAudioProcessor


void FUN_00b32d70(undefined8 param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  bVar1 = *(byte *)((longlong)unaff_RDI + 0x14);
  cVar8 = unaff_RSI == 0;
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)(bVar1 & 3);
    if ((ulonglong)bVar1 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        if (*(longlong *)(unaff_RSI + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(longlong *)(unaff_RSI + 8 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(longlong *)(unaff_RSI + 0x10 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(longlong *)(unaff_RSI + 0x18 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar2 = uVar2 + 4;
      } while ((bVar1 & 0xfffffffc) != uVar2);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (*(longlong *)(unaff_RSI + uVar2 * 8 + uVar4 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if (cVar8 != '\0') {
    return;
  }
  plVar5 = (longlong *)unaff_RDI[7];
  uVar7 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  if (plVar5 == (longlong *)0x0) {
    bVar1 = *(byte *)(unaff_RDI + 2);
    if (uVar6 != 0) {
      if (6 < (ulonglong)uVar7 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((ulonglong)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
    uVar7 = (uint)bVar1;
    if (uVar7 != 0) {
      if (6 < (ulonglong)bVar1 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((ulonglong)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
  }
  else {
    if (uVar7 != 0) {
      if (6 < (ulonglong)uVar6 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar6 & 0xfffffff8) != uVar3);
      }
      if ((ulonglong)(uVar6 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar6 & 7) != uVar3);
      }
      plVar5 = (longlong *)unaff_RDI[7];
    }
    (**(code **)(*plVar5 + 0x538))();
  }
                    /* WARNING: Could not recover jumptable at 0x00b32f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x400))(param_2);
  return;
}


