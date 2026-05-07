// Function: FUN_0096739e
// Address: 0096739e
// Size: 518 bytes
// Class: Unknown


uint FUN_0096739e(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = *(int *)(unaff_RDI + 8);
  uVar5 = 0;
  switch(iVar1) {
  case 0:
    FUN_0096761c();
    break;
  case 1:
    lVar2 = 0;
    do {
      *(undefined1 *)((longlong)&local_48 + lVar2) = *(undefined1 *)(unaff_RDI + 0x1ec + lVar2);
      *(undefined1 *)(unaff_RDI + 0x1ec + lVar2) = *(undefined1 *)((longlong)unaff_RSI + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    FUN_0096761c();
    *unaff_RSI = *unaff_RSI ^ (uint)local_48;
    unaff_RSI[1] = unaff_RSI[1] ^ local_48._4_4_;
    unaff_RSI[2] = unaff_RSI[2] ^ (uint)uStack_40;
    unaff_RSI[3] = unaff_RSI[3] ^ uStack_40._4_4_;
    uVar5 = 0;
    break;
  case 2:
  case 3:
  case 5:
    uVar6 = iVar1 - 1;
    uVar3 = 0;
    uVar5 = 0;
    do {
      uVar5 = (int)*(char *)(unaff_RDI + 0x1ec + uVar3) | uVar5 << 8;
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    local_48 = *(undefined8 *)(unaff_RDI + 0x1ec);
    uStack_40 = *(undefined8 *)(unaff_RDI + 500);
    if (iVar1 < 0x11) {
      lVar2 = (longlong)(int)uVar6 + -1;
      lVar4 = 0;
      do {
        *(undefined1 *)(unaff_RDI + 0x1ec + lVar4) = *(undefined1 *)(unaff_RDI + 0x1ed + lVar2);
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar2 < 0xf);
    }
    FUN_00967000();
    uVar3 = 0;
    do {
      *(undefined1 *)(unaff_RDI + 0x1ec + (longlong)((0x11 - iVar1) + (int)uVar3)) =
           *(undefined1 *)((longlong)unaff_RSI + uVar3);
      *(byte *)((longlong)unaff_RSI + uVar3) =
           *(byte *)((longlong)unaff_RSI + uVar3) ^ *(byte *)((longlong)&local_48 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    break;
  case 10:
  case 0xb:
  case 0xd:
    uVar6 = iVar1 - 9;
    uVar3 = 0;
    uVar5 = 0;
    do {
      uVar5 = (int)*(char *)(unaff_RDI + 0x1ec + uVar3) | uVar5 << 8;
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    local_48 = *(undefined8 *)(unaff_RDI + 0x1ec);
    uStack_40 = *(undefined8 *)(unaff_RDI + 500);
    if (iVar1 < 0x19) {
      lVar2 = (longlong)(int)uVar6 + -1;
      lVar4 = 0;
      do {
        *(undefined1 *)(unaff_RDI + 0x1ec + lVar4) = *(undefined1 *)(unaff_RDI + 0x1ed + lVar2);
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar2 < 0xf);
    }
    FUN_00967000();
    uVar3 = 0;
    do {
      lVar2 = (longlong)((0x19 - iVar1) + (int)uVar3);
      *(byte *)(unaff_RDI + 0x1ec + lVar2) =
           *(byte *)((longlong)&local_48 + lVar2) ^ *(byte *)((longlong)unaff_RSI + uVar3);
      *(byte *)((longlong)unaff_RSI + uVar3) =
           *(byte *)((longlong)unaff_RSI + uVar3) ^ *(byte *)((longlong)&local_48 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    break;
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x15:
  case 0x1d:
    FUN_00967000();
    uVar5 = 0;
    uVar3 = 0;
    do {
      *(byte *)((longlong)unaff_RSI + uVar3) =
           *(byte *)((longlong)unaff_RSI + uVar3) ^ *(byte *)(unaff_RDI + 0x1ec + uVar3);
      uVar3 = uVar3 + 1;
    } while (iVar1 - 0xd != uVar3);
  }
  return uVar5;
}


