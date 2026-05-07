// Function: FUN_0176cbc0
// Address: 0176cbc0
// Size: 1181 bytes
// Class: MUScaleModeSequence
// String references:
//   "bool"
//   "_mode"
//   "MUScaleModeSequence"
//   "_isCyclic"
//   "MUScaleModeDegree"
//   "GNInt"
//   "_fundamentalIndex"
//   "_modeOffsetIsLocked"
//   "_modeFundamentalOffset"
//   "_modeFundamentalFifthsDirection"
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_0176cbc0(void)

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
  *this_ptr = &g_025fe2f0;
  FUN_0176d140();
  *(void*)(this_ptr + 8) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0176d220();
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d300();
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d480();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_mode";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeDegree");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeSequence");
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

