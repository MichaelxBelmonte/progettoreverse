// Function: FUN_016d7580
// Address: 016d7580
// Size: 1883 bytes
// Class: GNString


void FUN_016d7580(void)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char cVar8;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x10);
  lVar5 = *(longlong *)(lVar6 + (longlong)unaff_ESI * 8);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_38 = lVar5;
  FUN_016ccde0();
  FUN_016c2ef0();
  if (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) != 0) {
    do {
      FUN_00d23340();
      local_48 = CONCAT71(local_48._1_7_,(char)local_70);
      plVar3 = &local_70;
      if ((char)local_70 == '\0') {
        plVar3 = &local_48;
      }
      *(undefined1 *)plVar3 = 0;
      if (((char)local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      FUN_016d7fb0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
    } while (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) != 0);
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = *(longlong *)(local_38 + 0x60);
  }
  else {
    lVar5 = *(longlong *)
             (*(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x60)
    ;
    lVar6 = local_38;
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    local_70._0_1_ = '\0';
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = lVar5;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar2 = -local_60._4_4_;
        }
        else {
          iVar2 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar2);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar2 = 0;
        }
        local_60 = CONCAT44(iVar2,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar2 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if (*(int *)(local_68 + 0xc) <= iVar2) break;
      lVar5 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong *)(lVar5 + 8 + lVar6 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
      pVar7 = (pthread_key_t)lVar5;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0190a000();
      FUN_01909ea0();
      lVar6 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_016d8160();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar6 = local_68;
    FUN_01708ee0();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = *(longlong *)(local_38 + 0x70);
  }
  else {
    lVar5 = *(longlong *)
             (*(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x70)
    ;
    lVar6 = local_38;
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar5;
  FUN_00c8e4f0();
  if ((char)local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), (char)local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00d64850();
  lVar1 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar1 != local_78) {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x70) = local_78;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)(unaff_RDI + 0x78);
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    FUN_00d64850();
    if (*plVar3 != 0) {
      *plVar3 = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = *(longlong *)(local_38 + 0x78);
  }
  else {
    lVar5 = *(longlong *)
             (*(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x78)
    ;
    lVar6 = local_38;
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      lVar6 = local_38;
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      lVar5 = *(longlong *)(local_38 + 0x78);
    }
    else {
      lVar5 = *(longlong *)
               (*(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
               0x78);
      lVar6 = local_38;
    }
    pVar7 = (pthread_key_t)lVar6;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_70._0_1_ = '\0';
    iVar2 = FUN_00d237a0();
    if (((char)local_70 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    lVar6 = *(longlong *)(lVar5 + 0x10);
    lVar1 = *(longlong *)(lVar6 + (longlong)iVar2 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pVar7 = (pthread_key_t)lVar6;
    if (*plVar3 != lVar1) {
      FUN_00d64850();
      lVar6 = *plVar3;
      if (lVar6 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *plVar3 = lVar1;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
      cVar8 = *(char *)(local_38 + 0x80);
      if (*(char *)(unaff_RDI + 0x80) == cVar8) goto LAB_016d7ca5;
    }
    else {
      cVar8 = *(char *)(*(longlong *)
                         (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x80);
      if (*(char *)(unaff_RDI + 0x80) == cVar8) goto LAB_016d7ca5;
    }
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x80) = cVar8;
    FUN_00d64910();
  }
LAB_016d7ca5:
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}


