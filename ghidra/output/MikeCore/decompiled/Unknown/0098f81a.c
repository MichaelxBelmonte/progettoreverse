// Function: FUN_0098f81a
// Address: 0098f81a
// Size: 654 bytes
// Class: Unknown
// String references:
//   "sha256"
//   "sha1"
//   "sha512"
//   "gostr3411"
//   "ripemd160"
//   "sha1ime"
//   "sha384"
//   "tiger"
//   "whirlpool"
//   "sha224"
//   "sha3_224"
//   "sha3_256"


void * FUN_0098f81a(void)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  
  if (DAT_028a0220 == (void *)0x0) {
    uVar4 = 1;
    do {
      LOCK();
      bVar6 = DAT_028a0228 == 0;
      if (bVar6) {
        DAT_028a0228 = 1;
      }
      UNLOCK();
    } while (!bVar6);
    if ((DAT_028a0238 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      pvVar2 = operator_new(uVar4);
      lVar5 = (longlong)pvVar2 + 0x20;
      *(longlong *)((longlong)pvVar2 + 8) = lVar5;
      pvVar3 = operator_new(uVar4);
      *(void **)((longlong)pvVar2 + 0x18) = pvVar3;
      *(undefined8 *)((longlong)pvVar3 + 0x20) = 0;
      *(longlong *)((longlong)pvVar3 + 0x28) = (longlong)pvVar3 + 0x20;
      *(longlong *)((longlong)pvVar3 + 0x30) = (longlong)pvVar3 + 0x20;
      *(undefined8 *)((longlong)pvVar3 + 0x38) = 0;
      *(longlong *)((longlong)pvVar3 + 0x40) = (longlong)pvVar3 + 0x38;
      *(longlong *)((longlong)pvVar3 + 0x48) = (longlong)pvVar3 + 0x38;
      *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
      *(longlong *)((longlong)pvVar2 + 0x30) = lVar5;
      *(longlong *)((longlong)pvVar2 + 0x38) = lVar5;
      DAT_028a0230 = pvVar2;
      ___cxa_guard_release();
    }
    uVar7 = FUN_0098fc40(0,"gostr3411");
    uVar7 = FUN_0098fc40(uVar7,"ripemd160");
    uVar7 = FUN_0098fcd8(uVar7,"sha1");
    uVar7 = FUN_0098fd70(uVar7,"sha1ime");
    uVar7 = FUN_0098fe08(uVar7,"sha224");
    uVar7 = FUN_0098fe08(uVar7,"sha256");
    uVar7 = FUN_0098fe08(uVar7,"sha384");
    uVar7 = FUN_0098fe08(uVar7,"sha512");
    uVar7 = FUN_0098fea0(uVar7,"tiger");
    uVar7 = FUN_0098fc40(uVar7,"whirlpool");
    uVar7 = FUN_0098ff38(uVar7,"sha3_224");
    uVar7 = FUN_0098ff38(uVar7,"sha3_256");
    FUN_009902c8(uVar7,DAT_02744448);
    FUN_009b1db8();
    FUN_0098db68();
    FUN_009b2220();
    pvVar2 = DAT_028a0230;
    FUN_009d485c();
    DAT_028a0220 = pvVar2;
    DAT_028a0228 = 0;
  }
  return DAT_028a0220;
}


