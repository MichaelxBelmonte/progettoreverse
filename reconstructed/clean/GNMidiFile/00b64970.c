// Function: FUN_00b64970
// Address: 00b64970
// Size: 582 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void*
FUN_00b64970(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  void*puVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  void*puVar6;
  void*puVar7;
  int iVar8;
  bool bVar9;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_60;
  char in_stack_ffffffffffffffa8;
  uint8_t uVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00b5b3a0();
  if (in_stack_ffffffffffffffa8 == '\0') {
    if (local_60 == 0) goto LAB_00b64b89;
    FUN_00d50b00();
    if ((in_stack_ffffffffffffffa8 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
LAB_00b64a07:
    uVar10 = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
    bVar9 = true;
    iVar8 = 0;
    while( true ) {
      if (iVar8 != 0) {
        if (iVar8 < 1) {
          iVar8 = -iVar8;
        }
        else {
          uVar12 = CONCAT44((int)((uint64_t)uVar12 >> 0x20),(int)uVar12 - iVar8);
          FUN_00d23690();
          iVar13 = iVar13 + (int)((uint64_t)uVar12 >> 0x20);
          iVar8 = 0;
        }
        uVar12 = CONCAT44(iVar8,(int)uVar12);
      }
      iVar11 = (int)uVar12;
      iVar8 = iVar11 + 1;
      uVar12 = CONCAT44((int)((uint64_t)uVar12 >> 0x20),iVar8);
      if (*(int *)(local_60 + 0xc) <= iVar8) break;
      plVar1 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + (int64_t)iVar11 * 8);
      cVar4 = FUN_00b51d60();
      uVar5 = extraout_XMM0_Da;
      if ((cVar4 == '\0') ||
         (cVar4 = (**(code **)(*plVar1 + 0x368))(), uVar5 = extraout_XMM0_Da_00, cVar4 != '\0')) {
        if (!bVar9) {
          FUN_00c92190(uVar5,1,param_3,param_4,uVar10,local_60,uVar12,iVar13);
        }
        (**(code **)(*plVar1 + 0x378))();
        uVar5 = (**(code **)(*plVar1 + 0x370))();
        FUN_00c92190(extraout_XMM0_Da_01,uVar5);
        bVar9 = false;
      }
      iVar8 = (int)((uint64_t)uVar12 >> 0x20);
    }
    FUN_00b671d0();
    bVar9 = false;
    bVar3 = bVar9;
    if (*(int *)(puVar6 + 3) < 1) goto LAB_00b64b9a;
LAB_00b64b13:
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_0253a558;
    puVar7[2] = 0;
    puVar7[3] = 0;
    FUN_00d500e0();
    uVar12 = FUN_00b5beb0();
    puVar7[2] = uVar12;
    puVar2 = (void*)puVar7[3];
    if (puVar2 != puVar6) {
      FUN_00d50b00();
      puVar7[3] = puVar6;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    if (bVar9) goto LAB_00b64bb6;
  }
  else {
    if (local_60 != 0) goto LAB_00b64a07;
LAB_00b64b89:
    bVar9 = true;
    bVar3 = true;
    if (0 < *(int *)(puVar6 + 3)) goto LAB_00b64b13;
LAB_00b64b9a:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    if (bVar3) goto LAB_00b64bb6;
  }
  FUN_00d50b20();
LAB_00b64bb6:
  FUN_00d50b20();
  return this_ptr;
}

