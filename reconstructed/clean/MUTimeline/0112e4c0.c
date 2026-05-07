// Function: FUN_0112e4c0
// Address: 0112e4c0
// Size: 700 bytes
// Class: MUTimeline
// String references:
//   "MUTimeline"
//   "MUPart"
//   "MUQuarterSequence"
//   "MUPerformance"
//   "_composition"
//   "MUPulseTimeline"
//   "MUCompositionDescription"
//   "MUCompositionLayout"
// === MUTimeline properties ===
//   GNInt           _numerator
//   GNInt           _denominator
//   double          _offset
//   bool            _isDynamicTimeGrid


void FUN_0112e4c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  void*puVar11;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025e90a0;
  this_ptr[7] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e8f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e9e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPerformance");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ead0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterSequence");
  }
  puVar11 = this_ptr + 10;
  this_ptr[10] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ebc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionDescription",param_3,param_4,puVar11);
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ecb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionLayout");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112eda0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ee90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseTimeline");
  }
  return;
}

