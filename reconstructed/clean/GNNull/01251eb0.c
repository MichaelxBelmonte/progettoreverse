// Function: FUN_01251eb0
// Address: 01251eb0
// Size: 827 bytes
// Class: GNNull

uint FUN_01251eb0(uint64_t param_1,uint *param_2)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  uint64_t arg1;
  int64_t this_ptr;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_44;
  
  uVar9 = *(uint *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
  uVar5 = uVar9;
  if ((int)uVar9 < 0) {
    uVar5 = uVar9 + 7;
  }
  if (uVar9 + 7 < 0xf) {
LAB_01251f0c:
    uVar5 = 0;
LAB_012521d4:
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar5;
    }
    return uVar5;
  }
  iVar6 = (int)((uint64_t)arg1 >> 0x20);
  puVar4 = *(uint64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
  if ((iVar6 != 0) && (*puVar4 >> 0x20 != 0)) {
    cVar2 = FUN_00e7c020();
    if (cVar2 != '\0') goto LAB_01251f0c;
    puVar4 = *(uint64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
    uVar9 = *(uint *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
  }
  uVar5 = (int)uVar5 >> 3;
  if (((*(uint64_t *)((int64_t)(int)uVar9 + -8 + (int64_t)puVar4) >> 0x20 != 0) && (iVar6 != 0))
     && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) goto LAB_012521d4;
  if ((param_2 != (uint *)0x0) && (uVar9 = *param_2, uVar9 != 0xffffffff)) {
    if ((int)uVar5 <= (int)uVar9) {
      uVar9 = uVar5 - 1;
    }
    if (((iVar6 == 0) ||
        (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                 (int64_t)(int)uVar9 * 8) == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
      uVar7 = uVar9;
      if ((((((((int)(uVar5 - 1) <= (int)uVar9) || (iVar6 == 0)) ||
             (uVar8 = uVar9 + 1,
             *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                     (int64_t)(int)uVar8 * 8) == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
           (((uVar8 = uVar9 + 2, (int)uVar5 <= (int)uVar8 || (iVar6 == 0)) ||
            ((*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                      (int64_t)(int)uVar8 * 8) == 0 || (cVar2 = FUN_00e7c020(), cVar2 == '\0'))))))
          && ((uVar9 = uVar9 + 3, uVar8 = uVar5, (int)uVar9 < (int)uVar5 && (iVar6 != 0)))) &&
         ((*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                   (int64_t)(int)uVar9 * 8) != 0 && (cVar2 = FUN_00e7c020(), cVar2 != '\0')))) {
        uVar8 = uVar9;
      }
      goto LAB_01252136;
    }
    uVar5 = uVar9;
    if (0 < (int)uVar9) {
      uVar8 = uVar9;
      if (((iVar6 != 0) &&
          (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                   (uint64_t)(uVar9 - 1) * 8) != 0)) &&
         (cVar2 = FUN_00e7c020(), uVar7 = uVar9 - 1, cVar2 == '\0')) goto LAB_01252136;
      uVar5 = 1;
      if (1 < (int)uVar9) {
        if (((iVar6 != 0) &&
            (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                     (uint64_t)(uVar9 - 2) * 8) != 0)) &&
           (cVar2 = FUN_00e7c020(), uVar7 = uVar9 - 2, cVar2 == '\0')) goto LAB_01252136;
        uVar5 = 2;
        if (((2 < (int)uVar9) && (uVar5 = uVar9, iVar6 != 0)) &&
           (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                    (uint64_t)(uVar9 - 3) * 8) != 0)) {
          cVar2 = FUN_00e7c020();
          uVar7 = uVar9 - 3;
          if (cVar2 != '\0') {
            uVar7 = 0;
          }
          goto LAB_01252136;
        }
      }
    }
  }
  uVar8 = uVar5;
  uVar7 = 0;
LAB_01252136:
  iVar3 = uVar8 - uVar7;
joined_r0x0125213e:
  uVar5 = uVar8;
  uVar8 = uVar5;
  if (iVar3 != 1) {
    do {
      uVar5 = iVar3 / 2 + uVar7;
      uVar1 = *(uint64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)(int)uVar5 * 8);
      if ((uVar1 >> 0x20 != 0) && (iVar6 != 0)) {
        cVar2 = FUN_00e7c000();
        if (cVar2 != '\0') {
          uVar5 = uVar5 + 1;
          break;
        }
        iStack_44 = (int)(uVar1 >> 0x20);
        if (((iStack_44 != 0) && (iVar6 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
        goto code_r0x012521ba;
      }
      iVar3 = uVar5 - uVar7;
      uVar8 = uVar5;
      if (iVar3 == 1) break;
    } while( true );
  }
  goto LAB_012521d4;
code_r0x012521ba:
  iVar3 = uVar8 - uVar5;
  uVar7 = uVar5;
  goto joined_r0x0125213e;
}

