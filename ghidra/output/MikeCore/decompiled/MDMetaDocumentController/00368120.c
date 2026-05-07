// Function: FUN_00368120
// Address: 00368120
// Size: 2107 bytes
// Class: MDMetaDocumentController


/* WARNING: Removing unreachable block (ram,0x003688d9) */
/* WARNING: Removing unreachable block (ram,0x003688e5) */
/* WARNING: Removing unreachable block (ram,0x00368919) */
/* WARNING: Removing unreachable block (ram,0x00368925) */

void FUN_00368120(void)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  int iVar14;
  void *in_R9;
  longlong **pplVar15;
  longlong *local_148;
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  longlong *in_stack_fffffffffffffed8;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_b8;
  char local_b0;
  longlong *local_80;
  char local_78;
  longlong *local_60;
  longlong *local_58;
  code *local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00b160d0();
  plVar4 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  pplVar15 = &local_58;
  FUN_01f27fe0();
  plVar2 = local_58;
  FUN_003708c0();
  if (plVar2 == (longlong *)0x0) {
LAB_003681ae:
    pplVar15 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_003681ae;
  }
  plVar2 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar15 + 1) = 0;
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) goto LAB_00368969;
  FUN_00c8e710();
  plVar5 = local_58;
  local_60 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e710();
  plVar6 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar8 = (**(code **)(*plVar4 + 0x698))();
  uVar9 = (**(code **)(*plVar4 + 0x690))();
  (**(code **)(*plVar2 + 0x720))();
  (**(code **)(*local_80 + 0x618))();
  plVar2 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = (longlong *)0x0;
    local_48 = plVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar14 = -local_40._4_4_;
        }
        else {
          iVar14 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar14);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar14 = 0;
        }
        local_40 = CONCAT44(iVar14,(int)local_40);
      }
      lVar10 = (longlong)(int)local_40;
      iVar14 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar14);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar14) break;
      lVar13 = local_48[2];
      local_58 = *(longlong **)(lVar13 + 8 + lVar10 * 8);
      FUN_00757c60();
      pVar12 = (pthread_key_t)lVar13;
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_78 == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      in_stack_fffffffffffffed8 = local_80;
      FUN_00757c60();
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb450();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_148 = plVar5;
      local_140 = 0;
      local_138 = plVar6;
      local_130 = 0;
      in_R9 = (void *)(ulonglong)uVar9;
      FUN_00368ec0(&local_138,&local_148,uVar8);
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_002b3090();
    FUN_00d50b20();
  }
  uVar9 = (int)plVar5[3] + 3;
  if (uVar9 < 7) {
    local_60 = (longlong *)0x0;
    FUN_00d50b20();
  }
  else {
    local_58 = (longlong *)0x0;
    local_50 = FUN_00e8b540;
    _qsort_r(&local_58,4,0x370b80,in_R9,(int *)in_stack_fffffffffffffed8);
  }
  uVar1 = (int)plVar6[3] + 3;
  if (uVar1 < 7) {
    FUN_00d50b20();
    (**(code **)(*plVar4 + 0x6b0))();
    plVar2 = local_58;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) goto LAB_00368875;
LAB_003687a2:
    if (local_60 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x6b8))();
      plVar2 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) goto LAB_00368875;
    }
    else {
      (**(code **)(*plVar4 + 0x6b8))();
      plVar2 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
      }
      cVar7 = (**(code **)(*local_60 + 0x50))();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar7 == '\0') goto LAB_00368875;
    }
  }
  else {
    local_58 = (longlong *)0x0;
    local_50 = FUN_00e8b540;
    _qsort_r(&local_58,4,0x370b80,in_R9,(int *)in_stack_fffffffffffffed8);
    (**(code **)(*plVar4 + 0x6b0))();
    plVar2 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    }
    cVar7 = (**(code **)(*plVar6 + 0x50))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 != '\0') goto LAB_003687a2;
LAB_00368875:
    cVar7 = (**(code **)(*plVar4 + 0x390))();
    if ((cVar7 == '\0') || (cVar7 = (**(code **)(*plVar4 + 0x6c0))(), cVar7 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      (**(code **)(*plVar4 + 0x370))();
    }
    (**(code **)(*plVar4 + 0x6a0))();
    (**(code **)(*plVar4 + 0x6a8))();
    if (bVar3) {
      (**(code **)(*plVar4 + 0x368))();
    }
  }
  if (6 < uVar1) {
    FUN_00d50b20();
  }
  if ((6 < uVar9) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00368969:
  FUN_00d50b20();
  return;
}


