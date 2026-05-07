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
  int64_t lVar5;
  bool bVar6;
  uint32_t uVar7;
  
  if (g_028a0220 == (void *)0x0) {
    uVar4 = 1;
    do {
      LOCK();
      bVar6 = g_028a0228 == 0;
      if (bVar6) {
        g_028a0228 = 1;
      }
      UNLOCK();
    } while (!bVar6);
    if ((g_028a0238 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      pvVar2 = operator_new(uVar4);
      lVar5 = (int64_t)pvVar2 + 0x20;
      *(int64_t *)((int64_t)pvVar2 + 8) = lVar5;
      pvVar3 = operator_new(uVar4);
      *(void **)((int64_t)pvVar2 + 0x18) = pvVar3;
      *(void*)((int64_t)pvVar3 + 0x20) = 0;
      *(int64_t *)((int64_t)pvVar3 + 0x28) = (int64_t)pvVar3 + 0x20;
      *(int64_t *)((int64_t)pvVar3 + 0x30) = (int64_t)pvVar3 + 0x20;
      *(void*)((int64_t)pvVar3 + 0x38) = 0;
      *(int64_t *)((int64_t)pvVar3 + 0x40) = (int64_t)pvVar3 + 0x38;
      *(int64_t *)((int64_t)pvVar3 + 0x48) = (int64_t)pvVar3 + 0x38;
      *(void*)((int64_t)pvVar2 + 0x28) = 0;
      *(int64_t *)((int64_t)pvVar2 + 0x30) = lVar5;
      *(int64_t *)((int64_t)pvVar2 + 0x38) = lVar5;
      g_028a0230 = pvVar2;
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
    FUN_009902c8(uVar7,g_02744448);
    FUN_009b1db8();
    FUN_0098db68();
    FUN_009b2220();
    pvVar2 = g_028a0230;
    FUN_009d485c();
    g_028a0220 = pvVar2;
    g_028a0228 = 0;
  }
  return g_028a0220;
}

