// Function: FUN_00990540
// Address: 00990540
// Size: 1106 bytes
// Class: Unknown

void FUN_00990540(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  char cVar6;
  char cVar7;
  uint64_t uVar8;
  int64_t lVar9;
  void*puVar10;
  void*arg1;
  void*this_ptr;
  void*puVar11;
  void*puVar12;
  void*puVar13;
  void*puVar14;
  void*puVar15;
  int local_34;
  
LAB_0099055b:
  puVar1 = arg1 + -3;
  puVar10 = this_ptr;
LAB_00990572:
  while( true ) {
    this_ptr = puVar10;
    uVar8 = (int64_t)arg1 - (int64_t)this_ptr;
    if ((uint64_t)(((int64_t)uVar8 >> 3) * -0x5555555555555555) < 6) {
                                              (*(&LAB_00990a54 +
                *(int *)(&LAB_00990a54 + ((int64_t)uVar8 >> 3) * -0x5555555555555554)))();
      return;
    }
    if ((int64_t)uVar8 < 0xa8) {
      FUN_00990ffd(uVar8,param_2);
      return;
    }
    puVar10 = this_ptr + (uVar8 / 0x30) * 3;
    if ((int64_t)uVar8 < 0x5da9) {
      local_34 = FUN_00990aed(param_2,puVar1);
    }
    else {
      local_34 = FUN_00990e4a((uVar8 / 0xc & 0xfffffffffffffff8) * 3 + (int64_t)puVar10,puVar10,
                              puVar1,param_2);
    }
    cVar6 = FUN_00990a6c();
    puVar13 = arg1 + -6;
    puVar14 = puVar1;
    if (cVar6 != '\0') break;
    while (puVar14 = puVar13, this_ptr != puVar14) {
      cVar6 = FUN_00990a6c();
      puVar13 = puVar14 + -3;
      if (cVar6 != '\0') goto code_r0x0099063b;
    }
    puVar13 = this_ptr + 3;
    cVar6 = FUN_00990a6c();
    if (cVar6 == '\0') {
      if (puVar13 == puVar1) {
        return;
      }
      puVar13 = this_ptr + 6;
      while (cVar6 = FUN_00990a6c(), cVar6 == '\0') {
        puVar13 = puVar13 + 3;
        if (arg1 == puVar13) {
          return;
        }
      }
      uVar2 = puVar13[-1];
      uVar3 = puVar13[-3];
      uVar4 = puVar13[-2];
      puVar13[-1] = arg1[-1];
      uVar5 = *puVar1;
      puVar13[-2] = arg1[-2];
      puVar13[-3] = uVar5;
      arg1[-1] = uVar2;
      arg1[-2] = uVar4;
      *puVar1 = uVar3;
    }
    puVar14 = puVar1;
    if (puVar13 == puVar1) {
      return;
    }
    while( true ) {
      puVar10 = puVar13 + -3;
      do {
        puVar12 = puVar10;
        puVar10 = puVar12 + 3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 == '\0');
      puVar13 = puVar12 + 6;
      do {
        puVar11 = puVar14;
        puVar14 = puVar11 + -3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 != '\0');
      if (puVar14 <= puVar10) break;
      uVar2 = puVar12[5];
      uVar3 = *puVar10;
      uVar4 = puVar12[4];
      puVar12[5] = puVar11[-1];
      uVar5 = *puVar14;
      puVar12[4] = puVar11[-2];
      *puVar10 = uVar5;
      puVar11[-1] = uVar2;
      puVar11[-2] = uVar4;
      *puVar14 = uVar3;
    }
  }
  goto LAB_0099068a;
code_r0x0099063b:
  uVar2 = this_ptr[2];
  uVar3 = *this_ptr;
  uVar4 = this_ptr[1];
  this_ptr[2] = puVar14[2];
  uVar5 = *puVar14;
  this_ptr[1] = puVar14[1];
  *this_ptr = uVar5;
  puVar14[2] = uVar2;
  puVar14[1] = uVar4;
  *puVar14 = uVar3;
  local_34 = local_34 + 1;
LAB_0099068a:
  puVar13 = this_ptr + 3;
  puVar12 = puVar13;
  if (puVar13 < puVar14) {
    while( true ) {
      puVar13 = puVar12 + -3;
      do {
        puVar11 = puVar13;
        puVar13 = puVar11 + 3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 != '\0');
      puVar12 = puVar11 + 6;
      do {
        puVar15 = puVar14;
        puVar14 = puVar15 + -3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 == '\0');
      if (puVar14 < puVar13) break;
      uVar2 = puVar11[5];
      uVar3 = *puVar13;
      uVar4 = puVar11[4];
      puVar11[5] = puVar15[-1];
      uVar5 = *puVar14;
      puVar11[4] = puVar15[-2];
      *puVar13 = uVar5;
      puVar15[-1] = uVar2;
      puVar15[-2] = uVar4;
      *puVar14 = uVar3;
      local_34 = local_34 + 1;
      if (puVar10 == puVar13) {
        puVar10 = puVar14;
      }
    }
  }
  if ((puVar13 != puVar10) && (cVar6 = FUN_00990a6c(), cVar6 != '\0')) {
    uVar2 = puVar13[2];
    uVar3 = *puVar13;
    uVar4 = puVar13[1];
    puVar13[2] = puVar10[2];
    uVar5 = *puVar10;
    puVar13[1] = puVar10[1];
    *puVar13 = uVar5;
    puVar10[2] = uVar2;
    puVar10[1] = uVar4;
    *puVar10 = uVar3;
    local_34 = local_34 + 1;
  }
  if (local_34 == 0) {
    cVar6 = FUN_00991105();
    cVar7 = FUN_00991105();
    if (cVar7 != '\0') goto LAB_0099094c;
    puVar10 = puVar13 + 3;
    if (cVar6 != '\0') goto LAB_00990572;
  }
  lVar9 = ((int64_t)arg1 - (int64_t)puVar13 >> 3) * -0x5555555555555555;
  if (lVar9 <= ((int64_t)puVar13 - (int64_t)this_ptr >> 3) * -0x5555555555555555) {
    FUN_00990540(lVar9,param_2);
    arg1 = puVar13;
    goto LAB_0099055b;
  }
  FUN_00990540(lVar9,param_2);
  puVar10 = puVar13 + 3;
  goto LAB_00990572;
LAB_0099094c:
  arg1 = puVar13;
  if (cVar6 != '\0') {
    return;
  }
  goto LAB_0099055b;
}

