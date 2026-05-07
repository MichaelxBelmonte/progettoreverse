// Function: FUN_008ee584
// Address: 008ee584
// Size: 1507 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_008ee584(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x130;
  lVar7 = this_ptr + 0x118;
  lVar8 = this_ptr + 0x110;
  lVar9 = this_ptr + 0xf8;
  lVar10 = this_ptr + 0xe0;
  lVar11 = this_ptr + 200;
  lVar12 = this_ptr + 0xb0;
  lVar13 = this_ptr + 0x98;
  lVar14 = this_ptr + 0x80;
  lVar15 = this_ptr + 0x68;
  lVar16 = this_ptr + 0x50;
  lVar17 = this_ptr + 0x38;
  lVar18 = this_ptr + 0x20;
  lVar19 = this_ptr + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_38,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12
                       ,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,uVar20,uVar21,uVar22);
    if (local_38 == 0) break;
    switch(local_32) {
    case 1:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x168) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x169) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x16a) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 4:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x16b) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x16c) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xb:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x16d) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xc:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x16e) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xd:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x16f) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xe:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x170) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xf:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x171) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x10:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x172) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x11:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x173) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x12:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x174) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x14:
      if (local_38 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        *(void*)(this_ptr + 0x175) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x15:
      if (local_38 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        *(void*)(this_ptr + 0x176) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x1e:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x177) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x1f:
      if (local_38 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        *(void*)(this_ptr + 0x178) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x20:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x179) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*arg1 + 0xd0))();
  if ((uVar20 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(arg1 + 3) = (int)arg1[3] + -1;
  return iVar3 + iVar2 + iVar1;
}

