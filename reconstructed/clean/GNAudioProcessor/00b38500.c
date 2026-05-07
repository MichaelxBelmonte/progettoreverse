// Function: FUN_00b38500
// Address: 00b38500
// Size: 549 bytes
// Class: GNAudioProcessor

void FUN_00b38500(double param_1)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint unaff_ESI;
  int64_t this_ptr;
  double dVar9;
  double dVar10;
  
  *(uint *)(this_ptr + 8) = unaff_ESI;
  *(void*)(this_ptr + 0xc) = 0;
  dVar10 = g_023d5b98;
  if (unaff_ESI < 5) {
    dVar10 = *(double *)(&g_023d5bc0 + (int64_t)(int)unaff_ESI * 8);
  }
  dVar10 = g_0238fee8 / dVar10;
  dVar9 = 0.0;
  if (0.0 <= param_1) {
    dVar9 = param_1;
  }
  iVar3 = FUN_00e7d850(dVar9 * dVar10);
  if (unaff_ESI == 2) {
    uVar7 = (short)(iVar3 / 0x1a574) * 0x2aab;
    *(char *)(this_ptr + 0x10) =
         (char)(iVar3 / 0x1a574) + ((char)(uVar7 >> 0x12) - (char)((int)uVar7 >> 0x1f)) * -0x18;
    iVar4 = (iVar3 % 0x1a574) % 0x463e;
    cVar8 = (char)((iVar3 % 0x1a574) / 0x463e);
    if (iVar4 < 0x708) {
      *(char *)(this_ptr + 0x11) = cVar8 * '\n';
      uVar7 = ((uint)((short)iVar4 * -0x7777) >> 0x10) + iVar4;
      cVar8 = (char)((short)uVar7 >> 4) + (char)((uVar7 & 0xffff) >> 0xf);
      *(char *)(this_ptr + 0x12) = cVar8;
      *(char *)(this_ptr + 0x13) = cVar8 * -0x1e + (char)iVar4;
    }
    else {
      uVar7 = iVar4 - 0x708U & 0xffff;
      uVar5 = uVar7 % 0x706;
      *(char *)(this_ptr + 0x11) = (char)(uVar7 / 0x706) + cVar8 * '\n' + '\x01';
      if ((ushort)uVar5 < 0x1c) {
        *(void*)(this_ptr + 0x12) = 0;
        *(char *)(this_ptr + 0x13) = (char)uVar5 + '\x02';
      }
      else {
        uVar7 = (uVar5 - 0x1c & 0xffff) / 0x1e;
        cVar8 = (char)uVar7;
        *(char *)(this_ptr + 0x12) = cVar8 + '\x01';
        *(char *)(this_ptr + 0x13) = (char)uVar5 + (cVar8 * '\x02' - (char)(uVar7 << 5)) + -0x1c;
      }
    }
  }
  else {
    iVar6 = FUN_00e7d850(dVar10);
    *(char *)(this_ptr + 0x13) = (char)(iVar3 % iVar6);
    iVar4 = (int)((int64_t)iVar3 / (int64_t)iVar6);
    iVar2 = iVar4 / 0x3c;
    cVar8 = (char)iVar2;
    *(char *)(this_ptr + 0x12) = (char)((int64_t)iVar3 / (int64_t)iVar6) + cVar8 * -0x3c;
    lVar1 = (int64_t)iVar2 * 0x88888889;
    *(char *)(this_ptr + 0x11) =
         cVar8 + ((char)(uint)((uint64_t)lVar1 >> 0x25) - (char)(lVar1 >> 0x3f)) * -0x3c;
    iVar4 = iVar4 / 0xe10;
    *(char *)(this_ptr + 0x10) =
         (char)iVar4 +
         ((char)((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 2) - (char)(iVar4 >> 0x1f)) * -0x18;
  }
  return;
}

