// Function: FUN_01db5150
// Address: 01db5150
// Size: 533 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01db5150(uint64_t param_1,uint64_t param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t local_68;
  char local_60;
  uint64_t local_40;
  float local_38;
  float local_34;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  FUN_01db2340();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_01db2340();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01db51e8;
    FUN_00d50b00();
  }
  else if (local_68 == 0) {
LAB_01db51e8:
    local_34 = 0.0;
    goto joined_r0x01db51e1;
  }
  local_34 = 0.0;
  if (*(int *)(local_68 + 0xc) != 0) {
    local_34 = (float)(*(int *)(local_68 + 0xc) + -1) * g_023b36b0;
  }
  FUN_00d50b20();
joined_r0x01db51e1:
  if (local_68 != 0) {
    if (*(int *)(local_68 + 0xc) != 0) {
      if (*(int *)(local_68 + 0xc) < 1) {
        fVar8 = 0.0;
      }
      else {
        local_38 = 0.0;
        lVar4 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + lVar4 * 8);
          plVar3 = *(int64_t **)(lVar2 + 0x20);
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar3 + 0x4e8))(*(void*)(lVar2 + 0x10));
          FUN_00d50b20();
          plVar3 = *(int64_t **)(lVar2 + 0x20);
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar3 + 0x4d8))();
          FUN_00d50b20();
          fVar8 = fVar6;
          fVar5 = fVar7;
          if ((char)this_ptr[0x27] != '\0') {
            fVar8 = fVar7;
            fVar5 = fVar6;
          }
          fVar7 = 0.0;
          fVar6 = local_34 + fVar5;
          if (fVar8 <= local_38) {
            fVar8 = local_38;
          }
          lVar4 = lVar4 + 1;
          local_38 = fVar8;
          local_34 = fVar6;
        } while ((int)lVar4 < *(int *)(local_68 + 0xc));
      }
      FUN_01db88f0();
      (**(code **)(*this_ptr + 0x4d8))();
      local_40 = CONCAT44(fVar7,fVar6);
      bVar1 = *(byte *)(this_ptr + 0x27);
      *(float *)((int64_t)&local_40 + (uint64_t)((uint64_t)bVar1 == 0) * 4) = local_34;
      *(float *)((uint64_t)&local_40 | (uint64_t)bVar1 << 2) = fVar8;
      (**(code **)(*this_ptr + 0x4e8))(local_40);
    }
    FUN_00d50b20();
  }
  return;
}

