// Function: FUN_018d9a10
// Address: 018d9a10
// Size: 1140 bytes
// Class: Unknown

void FUN_018d9a10(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_018d8790();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (0 < *(int *)((int64_t)local_48 + 0xc)) {
    lVar8 = 0;
    do {
      lVar1 = *(int64_t *)(local_48[2] + lVar8 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(lVar1 + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(lVar2 + 0xc) < 1) {
        bVar3 = false;
      }
      else {
        lVar7 = 0;
        do {
          cVar6 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8) + 0x50))();
          if (cVar6 != '\0') {
            *this_ptr = lVar1;
            *(void*)(this_ptr + 1) = 1;
            bVar3 = true;
            goto LAB_018d9b32;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar2 + 0xc));
        bVar3 = false;
      }
LAB_018d9b32:
      FUN_00d50b20();
      if (lVar1 != 0 && !bVar3) {
        FUN_00d50b20();
      }
      if (bVar3) goto LAB_018d9ea0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((int64_t)local_48 + 0xc));
  }
  if (param_2 != '\0') {
    FUN_00d99300();
    lVar8 = g_027259e0;
    if (g_027259e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d97fb0();
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_018d8840();
    if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (*(int *)((int64_t)local_48 + 0xc) < 1) {
      bVar3 = false;
    }
    else {
      lVar8 = 0;
      do {
        lVar1 = *(int64_t *)(local_48[2] + lVar8 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *(int64_t *)(lVar1 + 0x18);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if (*(int *)(lVar2 + 0xc) < 1) {
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          do {
            FUN_00d99300();
            lVar5 = g_027259e0;
            if (g_027259e0 != 0) {
              FUN_00d50b00();
            }
            FUN_00d97fb0();
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            cVar6 = (**(code **)(*local_48 + 0x50))();
            if (cVar6 != '\0') {
              *this_ptr = lVar1;
              *(void*)(this_ptr + 1) = 1;
              FUN_00d50b20();
              bVar4 = true;
              bVar3 = false;
              goto LAB_018d9de5;
            }
            FUN_00d50b20();
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar2 + 0xc));
          bVar4 = false;
          bVar3 = true;
        }
LAB_018d9de5:
        FUN_00d50b20();
        if (!bVar4 && lVar1 != 0) {
          FUN_00d50b20();
        }
        if (!bVar3) {
          bVar3 = true;
          if (local_48 != (int64_t *)0x0) goto LAB_018d9e76;
          goto LAB_018d9e7f;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)((int64_t)local_48 + 0xc));
      bVar3 = (bool)(bVar3 ^ 1);
    }
LAB_018d9e76:
    FUN_00d50b20();
LAB_018d9e7f:
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (bVar3) goto LAB_018d9ea0;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_018d9ea0:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

