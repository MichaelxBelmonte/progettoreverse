// Function: FUN_012bafd0
// Address: 012bafd0
// Size: 7453 bytes
// Class: MULSSComponentRenderer


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012bafd0(undefined4 param_1,int param_2,undefined4 param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  double dVar9;
  bool bVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  pthread_key_t pVar18;
  ulonglong in_RCX;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 in_R8D;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM4_Db;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong local_118;
  char local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_3c;
  char local_38 [8];
  
  dVar9 = (double)CONCAT44(in_XMM4_Db,in_XMM4_Da);
  lVar13 = *unaff_RSI;
  local_c8 = DAT_0240d164;
  local_c4 = in_R8D;
  if (lVar13 != 0) {
    uVar19 = in_RCX;
    pvVar11 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar11 != (void *)0x0) {
      lVar13 = *unaff_RSI;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar13 + 0x7d) == '\0') {
      lVar13 = *unaff_RSI;
      local_b8 = param_4;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x40);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x70) == 0) {
        local_a0 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_a0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x40);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x58) == 0) {
        local_f0 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_f0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x48);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x58) == 0) {
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x50);
      local_e8 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x58) == 0) {
        local_b0 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x50);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x50);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_b0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar13 + 0x88) == 0) {
        local_a8 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_a8 = *(undefined8 *)(*(longlong *)(lVar13 + 0x88) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      local_c8 = *(undefined4 *)(lVar13 + 0xac);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x48);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      uVar28 = *(undefined4 *)(lVar12 + 0x8c);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x50);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      uVar30 = *(undefined4 *)(lVar12 + 0x8c);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7b) == '\0') {
        local_108 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_108 = *(undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7c) == '\0') {
        local_100 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x50);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x50);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_100 = *(undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7a) == '\0') {
LAB_012bb9a5:
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        if (*(longlong *)(lVar13 + 0x90) == 0) goto LAB_012bb9a5;
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar13 + 0x90) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x40);
      local_e0 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar12 + 0x68) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x48);
      local_d8 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar12 + 0x68) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x50);
      local_d0 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) != '\0') {
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x58);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x58);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        local_c0 = 0;
        lVar13 = local_b8;
      }
      else {
        lVar12 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        lVar13 = local_b8;
        if (pvVar11 != (void *)0x0) {
          lVar12 = *unaff_RSI;
          lVar14 = FUN_00e8b990();
          if (lVar14 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
        }
        if (*(longlong *)(lVar12 + 0x98) == 0) {
          local_c0 = 0;
        }
        else {
          lVar12 = *unaff_RSI;
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          if (pvVar11 != (void *)0x0) {
            lVar12 = *unaff_RSI;
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8)
              ;
            }
          }
          local_c0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x98) + 0x10);
        }
      }
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0xa0) == 0) {
        local_f8 = 0;
      }
      else {
        lVar12 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *unaff_RSI;
          lVar14 = FUN_00e8b990();
          if (lVar14 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
        }
        local_f8 = *(undefined8 *)(*(longlong *)(lVar12 + 0xa0) + 0x10);
      }
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar26 = *(float *)(lVar12 + 0xb8);
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar27 = *(float *)(lVar12 + 0xbc);
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar2 = *(float *)(lVar12 + 0xc0);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar12 = *(longlong *)(unaff_RDI + 0x2d8);
      uVar19 = CONCAT71((int7)(uVar19 >> 8),lVar12 < 0);
      if (lVar12 <= lVar13 && lVar12 >= 0) {
        *(ulonglong *)(unaff_RDI + 0x2d0) = local_res8;
        *(undefined8 *)(unaff_RDI + 0x2d8) = 0xffffffffffffffff;
        dVar29 = (double)local_res10 * dVar9 + DAT_023934c8;
        *(undefined1 *)(unaff_RDI + 0x2e0) = 0;
        *(double *)(unaff_RDI + 0x2e8) = dVar29;
        *(undefined8 *)(unaff_RDI + 0x2f0) = 0;
        *(undefined8 *)(unaff_RDI + 0x2f8) = 0;
        uVar19 = local_res8;
      }
      FUN_00d23340();
      local_38[0] = local_110[0];
      pcVar15 = local_110;
      if (local_110[0] == '\0') {
        pcVar15 = local_38;
      }
      *pcVar15 = '\0';
      if ((local_110[0] != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (local_118 != 0) {
        lVar13 = *(longlong *)(unaff_RDI + 0x2d8);
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (lVar13 == -1) {
          FUN_00d23340();
          pcVar15 = local_110;
          if (local_110[0] == '\0') {
            pcVar15 = local_38;
          }
          local_38[0] = local_110[0];
          *pcVar15 = '\0';
          if ((local_110[0] != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] == '\0') && (local_118 != 0)) {
            FUN_00d50b00();
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          uVar17 = local_118;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            uVar19 = local_118;
            uVar17 = *(ulonglong *)
                      (local_118 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
          lVar13 = *(longlong *)(uVar17 + 0x50);
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          if (pvVar11 != (void *)0x0) {
            lVar13 = *(longlong *)(uVar17 + 0x50);
            lVar12 = FUN_00e8b990();
            if (lVar12 != 0) {
              lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8)
              ;
            }
          }
          lVar13 = *(longlong *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          lVar12 = lVar13;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar12 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
          lVar12 = *(longlong *)(lVar12 + 0x58);
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          lVar14 = lVar13;
          if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            lVar14 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
          lVar12 = lVar12 + *(longlong *)(lVar14 + 0xd0);
          *(longlong *)(unaff_RDI + 0x2d8) = lVar12;
          dVar29 = (double)lVar12 * dVar9;
          fVar25 = (float)(dVar29 - (double)*(longlong *)(unaff_RDI + 0x2d0) * dVar9) * DAT_02391090
          ;
          if (DAT_02421228 <= fVar25) {
            fVar25 = DAT_02421228;
          }
          *(float *)(unaff_RDI + 0x2f0) = fVar25;
          *(double *)(unaff_RDI + 0x2e8) = dVar29 - (double)fVar25;
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if (local_118 != 0) {
            FUN_00d50b20();
          }
        }
      }
      fVar25 = 0.0;
      if ((((fVar26 != 0.0) || (NAN(fVar26))) || (0.0 < fVar27)) || ((fVar2 != 0.0 || (NAN(fVar2))))
         ) {
        uVar23 = (pthread_key_t)in_RCX + param_2;
        uVar8 = *(uint *)(unaff_RDI + 0x160);
        uVar19 = (ulonglong)uVar8;
        if ((int)uVar8 < 1) {
          fVar26 = 0.0;
        }
        else {
          if ((int)uVar23 < 1) {
            fVar26 = 0.0;
          }
          else {
            fVar26 = 0.0;
            uVar17 = 0;
            do {
              lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1e0) + uVar17 * 8);
              uVar21 = 0;
              if (2 < (ulonglong)uVar23 - 1) {
                do {
                  fVar2 = *(float *)(lVar13 + uVar21 * 4);
                  fVar25 = *(float *)(lVar13 + 4 + uVar21 * 4);
                  fVar3 = *(float *)(lVar13 + 8 + uVar21 * 4);
                  fVar4 = *(float *)(lVar13 + 0xc + uVar21 * 4);
                  fVar26 = fVar4 * fVar4 + fVar3 * fVar3 + fVar25 * fVar25 + fVar2 * fVar2 + fVar26;
                  uVar21 = uVar21 + 4;
                } while ((uVar23 & 0xfffffffc) != uVar21);
              }
              if ((ulonglong)(uVar23 & 3) != 0) {
                uVar22 = 0;
                do {
                  fVar2 = *(float *)(lVar13 + uVar21 * 4 + uVar22 * 4);
                  fVar26 = fVar26 + fVar2 * fVar2;
                  uVar22 = uVar22 + 1;
                } while ((uVar23 & 3) != uVar22);
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar19);
          }
          if (1 < (int)uVar8) {
            fVar26 = fVar26 / (float)(int)uVar8;
          }
        }
        fVar25 = SQRT(fVar26 / (float)(int)uVar23) * _DAT_0240d168;
      }
      if ((0.0 < fVar27) && (local_res18 != 0)) {
        FUN_012bcdc0(param_1,param_3,fVar25,fVar27);
        uVar19 = in_RCX;
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x60);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x60);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar5 = *(char *)(lVar12 + 0x61);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x70);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x70);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar6 = *(char *)(lVar12 + 0x61);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x68);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x68);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar7 = *(char *)(lVar12 + 0x61);
      if (((cVar5 != '\0') || (cVar6 != '\0')) || (cVar7 != '\0')) {
        dVar29 = (double)local_b8 * dVar9;
        local_3c = DAT_02390d00;
        if (DAT_02394274 <= *(float *)(unaff_RDI + 0x2f0)) {
          if (*(double *)(unaff_RDI + 0x2e8) < dVar29) {
            fVar26 = (float)(dVar29 - *(double *)(unaff_RDI + 0x2e8)) /
                     *(float *)(unaff_RDI + 0x2f0);
            local_3c = 0.0;
            if (0.0 <= fVar26) {
              local_3c = fVar26;
            }
            if (DAT_02390124 < local_3c) {
              local_3c = DAT_02390124;
            }
          }
        }
        local_b8 = CONCAT44(local_b8._4_4_,
                            (float)(dVar29 - (double)*(longlong *)(unaff_RDI + 0x2d0) * dVar9));
        iVar24 = 0;
        do {
          pVar18 = (pthread_key_t)uVar19;
          if (iVar24 == 0) {
            if (cVar5 != '\0') {
              lVar13 = *unaff_RSI;
              pvVar11 = _pthread_getspecific(pVar18);
              if (pvVar11 != (void *)0x0) {
                lVar13 = *unaff_RSI;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              lVar13 = *(longlong *)(lVar13 + 0x60);
joined_r0x012bc65d:
              if (lVar13 == 0) goto LAB_012bc7d0;
LAB_012bc6c3:
              FUN_00d50b00();
              bVar10 = false;
              lVar12 = *(longlong *)(unaff_RDI + 0x2d0);
              goto joined_r0x012bc6da;
            }
          }
          else {
            if (iVar24 == 2) {
              if (cVar7 == '\0') break;
              lVar13 = *unaff_RSI;
              pvVar11 = _pthread_getspecific(pVar18);
              if (pvVar11 != (void *)0x0) {
                lVar13 = *unaff_RSI;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              lVar13 = *(longlong *)(lVar13 + 0x68);
              if (lVar13 != 0) goto LAB_012bc6c3;
LAB_012bc7d0:
              lVar12 = *(longlong *)(unaff_RDI + 0x2d0);
            }
            else {
              if (iVar24 == 1) {
                if (cVar6 != '\0') {
                  lVar13 = *unaff_RSI;
                  pvVar11 = _pthread_getspecific(pVar18);
                  if (pvVar11 != (void *)0x0) {
                    lVar13 = *unaff_RSI;
                    lVar12 = FUN_00e8b990();
                    if (lVar12 != 0) {
                      lVar13 = *(longlong *)
                                (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                    }
                  }
                  lVar13 = *(longlong *)(lVar13 + 0x70);
                  goto joined_r0x012bc65d;
                }
                goto LAB_012bc590;
              }
              lVar12 = *(longlong *)(unaff_RDI + 0x2d0);
            }
            bVar10 = true;
            lVar13 = 0;
joined_r0x012bc6da:
            if (lVar12 < 0) {
              pvVar11 = _pthread_getspecific((int)uVar19);
              lVar12 = lVar13;
              if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                lVar12 = *(longlong *)
                          (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
              }
              fVar26 = *(float *)(lVar12 + 0x5c);
              pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
              lVar12 = lVar13;
              if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                lVar12 = *(longlong *)
                          (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
              }
              if (*(float *)(lVar12 + 0x44) <= fVar26) {
                pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                lVar12 = lVar13;
                if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  lVar12 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
                }
                fVar26 = *(float *)(lVar12 + 0x44);
              }
              else {
                pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                  fVar26 = *(float *)(lVar13 + 0x5c);
                }
                else {
                  fVar26 = *(float *)(*(longlong *)
                                       (lVar13 + 0x20 +
                                       (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x5c);
                }
              }
              if (iVar24 == 0) goto LAB_012bc9b0;
LAB_012bc73e:
              if (iVar24 == 2) {
                if (DAT_0239424c <= local_3c) {
                  if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
                    pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                    if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                      if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44)
                         ) goto LAB_012bcc4a;
                      goto LAB_012bc8f4;
                    }
                    pfVar1 = (float *)(*(longlong *)
                                        (lVar13 + 0x20 +
                                        (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                    if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc8f4;
LAB_012bcc4a:
                    *(float *)(unaff_RDI + 0x2fc) = fVar26;
                    if (fVar26 <= DAT_0239424c) goto joined_r0x012bcbc0;
                  }
                  else {
LAB_012bc8f4:
                    if (*(float *)(unaff_RDI + 0x2fc) <= DAT_0239424c) goto joined_r0x012bcbc0;
                  }
                  pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                }
              }
              else {
                if (iVar24 != 1) goto joined_r0x012bcbc0;
                if (DAT_0239424c <= local_3c) {
                  if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
                    pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                    if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                      if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44)
                         ) goto LAB_012bcc19;
                      goto LAB_012bc771;
                    }
                    pfVar1 = (float *)(*(longlong *)
                                        (lVar13 + 0x20 +
                                        (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                    if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc771;
LAB_012bcc19:
                    *(float *)(unaff_RDI + 0x2f8) = fVar26;
                    fVar27 = fVar26;
                    if (fVar26 <= DAT_0239424c) goto LAB_012bcb89;
                  }
                  else {
LAB_012bc771:
                    fVar27 = *(float *)(unaff_RDI + 0x2f8);
                    if (*(float *)(unaff_RDI + 0x2f8) <= DAT_0239424c) goto LAB_012bcb89;
                  }
                  pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                  lVar12 = lVar13;
                  if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    lVar12 = *(longlong *)
                              (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
                  }
                  fVar26 = fVar27 + (*(float *)(lVar12 + 0x44) - *(float *)(unaff_RDI + 0x2f8)) *
                                    local_3c;
                }
LAB_012bcb89:
                _exp2f((fVar26 + DAT_02390d00) * DAT_023b1608);
              }
joined_r0x012bcbc0:
              if ((bool)(bVar10 | lVar13 == 0)) goto LAB_012bc590;
            }
            else {
              pvVar11 = _pthread_getspecific((int)uVar19);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar26 = (float)FUN_0188f4f0((undefined4)local_b8);
              if (iVar24 != 0) goto LAB_012bc73e;
LAB_012bc9b0:
              if (DAT_0239424c <= local_3c) {
                if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
                  pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                  if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                    if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44))
                    goto LAB_012bcab5;
                    goto LAB_012bc9cb;
                  }
                  pfVar1 = (float *)(*(longlong *)
                                      (lVar13 + 0x20 +
                                      (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                  if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc9cb;
LAB_012bcab5:
                  *(float *)(unaff_RDI + 0x2f4) = fVar26;
                  if (fVar26 <= DAT_0239424c) goto LAB_012bca78;
                }
                else {
LAB_012bc9cb:
                  if (*(float *)(unaff_RDI + 0x2f4) <= DAT_0239424c) goto LAB_012bca78;
                }
                pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
              }
LAB_012bca78:
              if (bVar10 || lVar13 == 0) goto LAB_012bc590;
            }
            FUN_00d50b20();
          }
LAB_012bc590:
          iVar24 = iVar24 + 1;
        } while (iVar24 != 3);
        if ((0.0 <= local_3c) && (*(char *)(unaff_RDI + 0x2e0) == '\0')) {
          *(undefined1 *)(unaff_RDI + 0x2e0) = 1;
        }
      }
      goto LAB_012bb121;
    }
  }
  local_f8 = 0;
  local_c0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_a0 = 0;
  uVar28 = DAT_023908e0;
  uVar30 = DAT_023908e0;
LAB_012bb121:
  FUN_012bd760(param_1,uVar28,uVar30,0);
  return;
}


