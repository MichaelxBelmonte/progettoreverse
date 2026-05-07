// Function: FUN_00d3ac30
// Address: 00d3ac30
// Size: 648 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00d3ac30(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  char cVar1;
  char cVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t lVar8;
  void*puVar9;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
  int64_t local_140;
  char local_138;
  int64_t local_128 [2];
  uint8_t local_118 [128];
  int64_t alStack_98 [2];
  uint8_t local_88 [80];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((((*(int64_t **)(this_ptr + 0x20) != (int64_t *)0x0) &&
       (*(int64_t *)(this_ptr + 0x10) != 0)) &&
      (lVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x360))(), lVar5 != 0)) &&
     (lVar5 = FUN_00e85f60(extraout_XMM0_Da,1), lVar5 != 0)) {
    pcVar7 = *(char **)(lVar5 + 0x18);
    cVar1 = *pcVar7;
    lVar6 = *(int64_t *)(this_ptr + 0x28);
    if (*(int *)(lVar6 + 0x18) < 0x30) {
LAB_00d3adb5:
      local_128[0] = 0;
      local_128[1] = 0;
      puVar9 = local_88;
      uVar12 = (**(code **)(lVar5 + 0x20))(puVar9,local_128);
      plVar3 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 0x10);
      if ((char)plVar3[2] == '@') {
        if (cVar1 == '@') {
          *plVar3 = local_128[0];
        }
        else {
          FUN_00c6faf0(uVar12,(int)cVar1);
          lVar5 = *plVar3;
          if (lVar5 != local_140) {
            lVar6 = local_140;
            if (local_138 == '\0') {
              if (local_140 == 0) {
                lVar6 = 0;
              }
              else {
                FUN_00d50b00();
                lVar5 = *plVar3;
              }
            }
            else {
              local_138 = '\0';
            }
            *plVar3 = lVar6;
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        iVar4 = FUN_00e82730();
        _memcpy(puVar9,(void *)(int64_t)iVar4,param_3);
      }
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return 1;
      }
      goto LAB_00d3ae2e;
    }
    puVar9 = local_118;
    lVar11 = 2;
    lVar10 = 0x18;
    lVar8 = *(int64_t *)(lVar6 + 0x10);
    if (*(char *)(lVar8 + 0x28) != '@') goto LAB_00d3ad40;
    while( true ) {
      cVar2 = pcVar7[lVar11 + -1];
      if (cVar2 == '@') goto LAB_00d3ad40;
      if (*(int64_t *)(lVar8 + lVar10) == 0) break;
      FUN_00c70850(CONCAT71((int7)((uint64_t)pcVar7 >> 8),cVar2),(int)cVar2);
      alStack_98[lVar11] = (int64_t)puVar9;
      lVar6 = *(int64_t *)(this_ptr + 0x28);
      while( true ) {
        if (*(int *)(lVar6 + 0x18) / 0x18 <= lVar11) goto LAB_00d3adb5;
        pcVar7 = *(char **)(lVar5 + 0x18);
        puVar9 = puVar9 + 0x10;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x18;
        lVar8 = *(int64_t *)(lVar6 + 0x10);
        if (*(char *)(lVar8 + 0x10 + lVar10) == '@') break;
LAB_00d3ad40:
        alStack_98[lVar11] = lVar8 + lVar10;
      }
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return 0;
  }
LAB_00d3ae2e:
                      ___stack_chk_fail();
}

