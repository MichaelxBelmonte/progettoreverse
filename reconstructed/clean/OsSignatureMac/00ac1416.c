// Function: FUN_00ac1416
// Address: 00ac1416
// Size: 533 bytes
// Class: OsSignatureMac
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/S...
//   "The index specified (%ld) is beyond the number of images in the binary (%ld)."
//   "void *pace::SimpleMachOBinary::getIndImage(const uint32_t, uint32_t *, cpu_type_t *, bool *, uint32...

uint * FUN_00ac1416(void*param_1,void*param_2,void*param_3,uint *param_4)

{
  uint uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint unaff_ESI;
  int64_t this_ptr;
  uint64_t uVar5;
  uint *puVar6;
  
  if (param_2 != (void*)0x0) {
    *param_2 = 0;
  }
  if (param_1 != (void*)0x0) {
    *param_1 = 0;
  }
  if (param_3 != (void*)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x18) + 4);
  }
  if (uVar1 <= unaff_ESI) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("void *pace::SimpleMachOBinary::getIndImage(const uint32_t, uint32_t *, cpu_type_t *, bool *, uint32_t *) const"
                 ,0xd7);
    FUN_009cbbdb();
  }
  lVar4 = *(int64_t *)(this_ptr + 0x20);
  if (lVar4 == *(int64_t *)(this_ptr + 0x28)) {
    puVar6 = (uint *)(**(code **)(**(int64_t **)(this_ptr + 8) + 0x18))();
    uVar2 = (**(code **)(**(int64_t **)(this_ptr + 8) + 0x10))();
    if (param_2 != (void*)0x0) {
      *param_2 = uVar2;
    }
    if (((param_1 == (void*)0x0) && (param_3 == (void*)0x0)) &&
       (param_4 == (uint *)0x0)) {
      return puVar6;
    }
    lVar4 = *(int64_t *)(this_ptr + 0x38);
    if (lVar4 == 0) {
      lVar4 = *(int64_t *)(this_ptr + 0x40);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else if (param_3 != (void*)0x0) {
        *param_3 = 1;
      }
    }
    if (param_1 != (void*)0x0) {
      *param_1 = *(void*)(lVar4 + 4);
    }
    if (param_4 == (uint *)0x0) {
      return puVar6;
    }
    uVar1 = *(uint *)(lVar4 + 0xc);
  }
  else {
    uVar5 = (uint64_t)unaff_ESI;
    lVar3 = (**(code **)(**(int64_t **)(this_ptr + 8) + 0x18))();
    uVar1 = *(uint *)(lVar4 + 8 + uVar5 * 0x14);
    if (param_2 != (void*)0x0) {
      *param_2 = *(void*)(lVar4 + 0xc + uVar5 * 0x14);
    }
    if (param_1 != (void*)0x0) {
      *param_1 = *(void*)(lVar4 + uVar5 * 0x14);
    }
    puVar6 = (uint *)(lVar3 + (uint64_t)uVar1);
    if (param_3 != (void*)0x0) {
      *param_3 = *puVar6 == 0xcffaedfe || *puVar6 == 0xfeedfacf;
    }
    if (param_4 == (uint *)0x0) {
      return puVar6;
    }
    uVar1 = puVar6[3];
    *param_4 = uVar1;
    if ((*puVar6 | 0x1000000) != 0xcffaedfe) {
      return puVar6;
    }
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  *param_4 = uVar1;
  return puVar6;
}

