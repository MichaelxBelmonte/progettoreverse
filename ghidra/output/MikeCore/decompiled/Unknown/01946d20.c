// Function: FUN_01946d20
// Address: 01946d20
// Size: 1646 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01947116) */

void FUN_01946d20(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  cVar1 = FUN_019415b0();
  if (cVar1 != unaff_SIL) {
    if (unaff_SIL != '\0') {
      (**(code **)(*unaff_RDI + 0x970))();
      local_118 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02729588;
      local_110 = '\x01';
      if (DAT_02729588 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar3;
      local_100 = '\x01';
      local_f8 = 0;
      local_f0 = '\0';
      FUN_00d31230(&local_f8,&local_108);
      lVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0197ce50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_e8 = DAT_02729590;
      if (DAT_02729590 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      (**(code **)(&UNK_00001668 + *unaff_RDI))();
      local_88 = local_40;
      local_80 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = '\x01';
      param_1 = (pthread_key_t)&local_88;
      FUN_00d41430();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(&UNK_00001668 + *unaff_RDI))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013901e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    lVar3 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_60 = '\0';
      local_68 = 0;
      local_58 = lVar3;
      local_50 = 0xffffffff;
      local_48 = 0;
      while( true ) {
        lVar3 = (longlong)(int)local_50;
        iVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar4);
        if (*(int *)(local_58 + 0xc) <= iVar4) break;
        local_128 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar3 * 8);
        local_120 = 0;
        local_68 = local_128;
        FUN_01947890(*(longlong *)(local_58 + 0x10),&local_128);
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar4 = -local_50._4_4_;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar4 = 0;
          }
          local_50 = CONCAT44(iVar4,(int)local_50);
        }
      }
      FUN_000be170();
      FUN_00d50b20();
    }
    if (unaff_SIL != '\0') {
      FUN_00d403d0();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02729590;
      if (DAT_02729590 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar3;
      local_d0 = '\x01';
      (**(code **)(&UNK_00001668 + *unaff_RDI))();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_00d41040(&local_78,&local_d8);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x970))();
      local_c8 = 0;
      local_c0 = '\0';
      FUN_0197ce50();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x970))();
      FUN_0197c970();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


