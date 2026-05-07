// Function: FUN_00637c40
// Address: 00637c40
// Size: 3194 bytes
// Class: MDURLOpenedController

void FUN_00637c40(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_178;
  char local_170;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  int64_t local_70;
  char local_68;
  char local_60 [8];
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  if (this_ptr[0x2b] == *arg1) {
    return;
  }
  FUN_00643590();
  plVar3 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00637c9b;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_00637c9b:
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar3;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar7 = (int64_t)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar6) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar7 * 8);
      FUN_0023af30(local_48[2],0);
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
    }
    FUN_0065ca40();
    FUN_00d50b20();
  }
  this_ptr[0x2b] = *arg1;
  FUN_006f3f00();
  plVar3 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    iVar6 = FUN_00177f00();
    if (-1 < iVar6) {
      FUN_00178ae0();
      plVar2 = local_58;
      plVar1 = (int64_t *)*arg1;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == plVar1) goto LAB_00637e9a;
    }
    FUN_00178f80();
    FUN_01f27fe0();
    cVar5 = (**(code **)(*local_58 + 0x450))();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_01e561b0();
      (**(code **)(*local_58 + 0x7f8))();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00637e9a:
  FUN_0063f230();
  plVar1 = local_58;
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_006f47d0();
    plVar1 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_0063f660();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_006f47d0();
  plVar1 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00751820();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00637870();
  plVar1 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_58 + 0x450))();
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_0062a580();
    FUN_006e2720();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_006c5ee0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x2e] != 0) {
      FUN_006e2720();
      plVar2 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((*(int64_t *)(this_ptr[0x10] + 0x308) == 0) && (cVar5 = FUN_005348b0(), cVar5 == '\0')) {
      FUN_00643690();
    }
    FUN_00643150();
    if (*(int64_t *)(this_ptr[0x10] + 0x308) != 0) {
      FUN_00710820();
      FUN_00444010();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_0062a580();
    FUN_006e2720();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_006c5ee0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x2e] != 0) {
      FUN_006e2720();
      plVar2 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this_ptr[0x1a] != 0) {
      FUN_006c4ec0();
    }
    FUN_00643150();
  }
  (**(code **)(*this_ptr + 0x5e8))();
  plVar2 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_108 = plVar2;
  if (this_ptr[0x2c] != 0) {
    FUN_006e3b60();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_01bd0ba0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x2f) = 1;
  }
  cVar5 = FUN_0063f180();
  if (cVar5 != '\0') {
    FUN_0063f660();
  }
  FUN_01e56750();
  if (local_58 == (int64_t *)0x0) {
    cVar5 = '\0';
  }
  else {
    FUN_01e56750();
    cVar5 = FUN_01e5d880();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_006fda30();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_00db26c0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar7 = g_026f6d00;
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_118 = 0;
  local_110 = '\0';
  FUN_00d40470(&local_118,&stack0xffffffffffffff00,3,3);
  plVar2 = local_108;
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  plVar4 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00631870();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006c4ec0();
  iVar6 = FUN_006e3cc0();
  if ((iVar6 == 2) || (cVar5 = FUN_006e2170(), cVar5 == '\0')) {
    (**(code **)(*this_ptr + 0x5d8))();
    FUN_006f4810();
    FUN_01e42250();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5e0))();
    FUN_00756eb0();
    FUN_00324fe0();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00643590();
    FUN_00d23310();
    plVar4 = local_58;
    pcVar8 = local_60;
    if (local_50[0] != '\0') {
      pcVar8 = local_50;
    }
    local_60[0] = local_50[0];
    *pcVar8 = '\0';
    if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0021a630();
    FUN_01e42250();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5e0))();
    FUN_00756eb0();
    FUN_00324fe0();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

